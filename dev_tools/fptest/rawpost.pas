program rawpost;
{$mode objfpc}{$H+}
// Raw-BIO DeepL POST, bypassing fphttpclient entirely.
// Uses amissl BIO_new_ssl_connect + BIO_write + BIO_read (the proven library path).
uses
  Classes, SysUtils, Exec, Utility, sockets, amissl, fpjson, jsonparser;

var
  ErrNo: Integer = 0;
  ctx: PSSL_CTX;
  web: PBIO;
  req, resp: AnsiString;
  r: LongInt;
  buf: array[0..4095] of byte;
  n, total, guard: Integer;
  JData: TJSONData;
  f: TextFile;
begin
  AssignFile(f, 'SYS:rawpost.log'); Rewrite(f);
  WriteLn(f, 'init'); Flush(f);
  if InitAmiSSL([AmiSSL_ErrNoPtr, AsTag(@ErrNo),
                 AmiSSL_SocketBase, AsTag(SocketBase), TAG_DONE]) <> 0 then
  begin
    WriteLn(f, 'InitAmiSSL FAILED'); Flush(f); Close(f); Halt;
  end;
  WriteLn(f, 'InitAmiSSL OK'); Flush(f);
  SSLeay_add_ssl_algorithms();
  SSL_load_error_strings();
  ctx := SSL_CTX_new(SSLv23_client_method());
  if ctx = nil then begin WriteLn(f,'ctx NULL err='+IntToStr(ERR_get_error)); Flush(f); Close(f); Halt; end;
  web := BIO_new_ssl_connect(ctx);
  r := BIO_ctrl(web, BIO_C_SET_CONNECT, 0, PAnsiChar('api-free.deepl.com:443'));
  WriteLn(f, 'SET_CONNECT r='+IntToStr(r)); Flush(f);
  r := BIO_ctrl(web, BIO_C_DO_STATE_MACHINE, 0, nil);
  WriteLn(f, 'HANDSHAKE r='+IntToStr(r)); Flush(f);
  if r <> 1 then begin
    WriteLn(f, 'handshake failed r='+IntToStr(r)); Flush(f);
    BIO_free_all(web); SSL_CTX_free(ctx); Close(f); Halt;
  end;
  WriteLn(f, 'HANDSHAKE OK'); Flush(f);

  req := 'POST /v2/translate HTTP/1.1'#13#10 +
         'Host: api-free.deepl.com'#13#10 +
         'Content-Type: application/x-www-form-urlencoded'#13#10 +
         'Content-Length: 22'#13#10 +
         'Connection: close'#13#10#13#10 +
         'text=hello&target_lang=IT';
  r := BIO_write(web, PAnsiChar(req), Length(req));
  WriteLn(f, 'BIO_write='+IntToStr(r)); Flush(f);

  total := 0;
  n := 1;
  guard := 0;
  resp := '';
  while (n > 0) and (guard < 50) do
  begin
    n := BIO_read(web, @buf[0], 4096);
    WriteLn(f, 'BIO_read n='+IntToStr(n)); Flush(f);
    if n > 0 then
    begin
      SetLength(resp, Length(resp) + n);
      Move(buf[0], resp[Length(resp)-n+1], n);
      total := total + n;
    end
    else if n < 0 then
      WriteLn(f, 'BIO_read<0 (nonblock?)');  // loop again until 0/EOF
    Inc(guard);
  end;
  WriteLn(f, 'TOTAL='+IntToStr(total)); Flush(f);
  WriteLn(f, 'RESP>>>' + Copy(resp,1, 600)); Flush(f);

  // Parse JSON: find first '{'
  try
    JData := GetJSON(resp, False);
    WriteLn(f, 'GetJSON OK class='+JData.ClassName); Flush(f);
    if JData is TJSONObject then
      WriteLn(f, 'FindPath=' + JData.FindPath('translations[0].text').AsString)
    else
      WriteLn(f, 'not a JSONObject');
  except
    on E: Exception do
      WriteLn(f, 'GetJSON EXCEPT: '+E.Classname+': '+E.Message);
  end;

  BIO_free_all(web);
  SSL_CTX_free(ctx);
  WriteLn(f, 'done'); Flush(f);
  Close(f);
end.
