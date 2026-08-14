program rawpost2;
{$mode objfpc}{$H+}
// GUI-exact reproduction: RawPost with placeholder DeepL key + repeat-until read loop.
uses
  Classes, SysUtils, Exec, Utility, sockets, amissl, fpjson, jsonparser;

var
  ErrNo: Integer = 0;
  Key: string = '00000000-0000-0000-0000-000000000000:00';
  ctx: PSSL_CTX;
  web: PBIO;
  hostport, host, path, req, body: AnsiString;
  r: LongInt;
  n, guard: Integer;
  buf: array[0..4095] of byte;
  Result: AnsiString;
  JData: TJSONData; JObject: TJSONObject;
  f: TextFile;
begin
  AssignFile(f, 'SYS:rp2.log'); Rewrite(f);
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
  WriteLn(f, 'host='+hostport+' path='+path); Flush(f);

  ctx := SSL_CTX_new(SSLv23_client_method());
  if ctx = nil then begin WriteLn(f,'ctx NULL err='+IntToStr(ERR_get_error)); Flush(f); Close(f); Halt; end;
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

  Result := '';
  guard := 0;
  repeat
    n := BIO_read(web, @buf[0], 4096);
    WriteLn(f, 'BIO_read n='+IntToStr(n)); Flush(f);
    if n > 0 then
      Result := Result + Copy(AnsiString(PAnsiChar(@buf[0])), 1, n)
    else if n = 0 then
      Break
    else
      Inc(guard);
  until (n = 0) or (guard > 200);
  WriteLn(f, 'RESULT_LEN='+IntToStr(Length(Result))); Flush(f);
  WriteLn(f, 'RESULT>>>'+Copy(Result,1,700)); Flush(f);

  try
    JData := GetJSON(Result, False);
    WriteLn(f, 'GetJSON OK class='+JData.ClassName); Flush(f);
    JObject := JData as TJSONObject;
    JData := JObject.FindPath('translations[0]');
    if JData is TJSONObject then
      WriteLn(f, 'GOOD: '+TJSONObject(JData).Get('text',''))
    else
      WriteLn(f, 'translations[0] not object');
  except
    on E: Exception do
      WriteLn(f, 'GetJSON EXCEPT: '+E.Classname+': '+E.Message);
  end;
  BIO_free_all(web); SSL_CTX_free(ctx);
  WriteLn(f, 'done'); Flush(f); Close(f);
end.
