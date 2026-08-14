program rawpost3;
{$mode objfpc}{$H+}
// GUI-exact flow WITH header-strip + chunked-decode before GetJSON.
uses
  Classes, SysUtils, Exec, Utility, sockets, amissl, fpjson, jsonparser;

var
  ErrNo: Integer = 0;
  Key: string = '00000000-0000-0000-0000-000000000000:00';
  ctx: PSSL_CTX;
  web: PBIO;
  hostport, host, path, req, body, Raw, Body666: AnsiString;
  r: LongInt;
  n, guard, i, pos0, chunklen, EndPos: Integer;
  buf: array[0..4095] of byte;
  JData: TJSONData; JObject: TJSONObject;
  f: TextFile;
begin
  AssignFile(f, 'SYS:rp3.log'); Rewrite(f);
  WriteLn(f, 'init'); Flush(f);
  if InitAmiSSL([AmiSSL_ErrNoPtr, AsTag(@ErrNo),
                 AmiSSL_SocketBase, AsTag(SocketBase), TAG_DONE]) <> 0 then
  begin
    WriteLn(f, 'InitAmiSSL FAILED'); Flush(f); Close(f); Halt;
  end;
  WriteLn(f, 'InitAmiSSL OK'); Flush(f);
  SSLeay_add_ssl_algorithms();
  SSL_load_error_strings();

  host := 'api-free.deepl.com/v2/translate';
  path := '/';
  r := Pos('/', host);
  if r > 0 then begin path := Copy(host, r, MaxInt); host := Copy(host, 1, r-1); end;
  if Pos(':', host) = 0 then host := host + ':443';
  hostport := host;

  ctx := SSL_CTX_new(SSLv23_client_method());
  if ctx = nil then begin WriteLn(f,'ctx NULL'); Flush(f); Close(f); Halt; end;
  web := BIO_new_ssl_connect(ctx);
  if web = nil then begin WriteLn(f,'web NULL'); SSL_CTX_free(ctx); Flush(f); Close(f); Halt; end;
  BIO_ctrl(web, BIO_C_SET_CONNECT, 0, PAnsiChar(hostport));
  if BIO_ctrl(web, BIO_C_DO_STATE_MACHINE, 0, nil) <> 1 then
  begin WriteLn(f,'HANDSHAKE !=1'); BIO_free_all(web); SSL_CTX_free(ctx); Flush(f); Close(f); Halt; end;
  WriteLn(f, 'HANDSHAKE OK'); Flush(f);

  body := 'text=hello&target_lang=IT';
  req := 'POST ' + path + ' HTTP/1.1'#13#10 +
         'Host: ' + host + #13#10 +
         'Content-Type: application/x-www-form-urlencoded'#13#10 +
         'Content-Length: ' + IntToStr(Length(body)) + #13#10 +
         'Authorization: DeepL-Auth-Key ' + Key + #13#10 +
         'Connection: close'#13#10#13#10 + body;
  r := BIO_write(web, PAnsiChar(req), Length(req));
  WriteLn(f, 'BIO_write='+IntToStr(r)); Flush(f);

  Raw := '';
  guard := 0;
  repeat
    n := BIO_read(web, @buf[0], 4096);
    WriteLn(f, 'BIO_read n='+IntToStr(n)); Flush(f);
    if n > 0 then
      Raw := Raw + Copy(AnsiString(PAnsiChar(@buf[0])), 1, n)
    else if n = 0 then
      Break
    else
      Inc(guard);
  until (n = 0) or (guard > 200);
  WriteLn(f, 'RAW_LEN='+IntToStr(Length(Raw))); Flush(f);
  WriteLn(f, 'RAW>>>'+Copy(Raw,1,700)); Flush(f);

  // --- strip HTTP headers (split at first \r\n\r\n) ---
  pos0 := Pos(#13#10#13#10, Raw);
  if pos0 > 0 then
    Body666 := Copy(Raw, pos0 + 4, MaxInt)
  else
    Body666 := Raw;
  WriteLn(f, 'BODY_WITH_CHUNK>>>'+Copy(Body666,1,300)); Flush(f);

  // --- decode chunked transfer-encoding ---
  // Body666 looks like: "73\r\n{json}\r\n0\r\n\r\n"  (repeat: hexlen CRLF data CRLF)
  Raw := '';
  i := 1;
  while i <= Length(Body666) do
  begin
    // read hex size line up to CRLF
    EndPos := i;
    while (EndPos <= Length(Body666)) and (Body666[EndPos] <> #13) do Inc(EndPos);
    // Body666[EndPos]=#13, next must be #10 and hex size follows at i..EndPos-1
    if EndPos > Length(Body666) then Break;
    if EndPos + 1 > Length(Body666) then Break;
    if Body666[EndPos+1] <> #10 then Break;
    chunklen := 0;
    // hex parse Body666[i..EndPos-1] ignoring spaces/final ;ext
    for pos0 := i to EndPos-1 do
    begin
      case Body666[pos0] of
        '0'..'9': chunklen := chunklen*16 + (Ord(Body666[pos0])-Ord('0'));
        'a'..'f': chunklen := chunklen*16 + (Ord(Body666[pos0])-Ord('a'))+10;
        'A'..'F': chunklen := chunklen*16 + (Ord(Body666[pos0])-Ord('A'))+10;
        ';': Break;  // chunk extensions
      end;
    end;
    i := EndPos + 2;                 // skip past CRLF
    if chunklen = 0 then Break;      // final chunk
    // next "chunklen" bytes are the data
    if i + chunklen - 1 > Length(Body666) then Break; // truncated
    Raw := Raw + Copy(Body666, i, chunklen);
    i := i + chunklen;
    // skip the CRLF after data
    if (i <= Length(Body666)) and (Body666[i] = #13) and (i+1 <= Length(Body666)) and (Body666[i+1]=#10) then
      i := i + 2;
  end;
  WriteLn(f, 'DECODED_LEN='+IntToStr(Length(Raw))); Flush(f);
  WriteLn(f, 'DECODED>>>'+Copy(Raw,1,300)); Flush(f);

  try
    JData := GetJSON(Raw, False);
    WriteLn(f, 'GetJSON OK class='+JData.ClassName); Flush(f);
    JData := JData.FindPath('message');
    if JData <> nil then
      WriteLn(f, 'message='+JData.AsString)
    else
      WriteLn(f, 'no message field');
  except
    on E: Exception do
      WriteLn(f, 'GetJSON EXCEPT: '+E.Classname+': '+E.Message);
  end;
  BIO_free_all(web); SSL_CTX_free(ctx);
  WriteLn(f, 'done'); Flush(f); Close(f);
end.
