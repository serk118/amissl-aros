program fbiotest;
{$mode objfpc}{$H+}
uses
  Classes, SysUtils, amissl;

var
  ctx: PSSL_CTX;
  web: PBIO;
  f: TextFile;
  sent, rd: Integer;
  buf: string;
  r: LongInt;
begin
  AssignFile(f, 'SYS:fbio.log'); Rewrite(f);
  WriteLn(f, 'init SSL'); Flush(f);
  SSLeay_add_ssl_algorithms();
  SSL_load_error_strings();
  ctx := SSL_CTX_new(SSLv23_client_method());
  WriteLn(f, 'ctx=', LongInt(PtrUInt(ctx))); Flush(f);
  if ctx = nil then begin WriteLn(f,'ctx NULL err='+IntToStr(ERR_get_error)); Close(f); Halt; end;
  web := BIO_new_ssl_connect(ctx);
  WriteLn(f, 'web=', LongInt(PtrUInt(web))); Flush(f);
  r := BIO_ctrl(web, BIO_C_SET_CONNECT, 0, PAnsiChar('api-free.deepl.com:443'));
  WriteLn(f, 'SET_CONNECT r=', r); Flush(f);
  r := BIO_ctrl(web, BIO_C_DO_STATE_MACHINE, 0, nil);
  WriteLn(f, 'DO_STATE_MACHINE r=', r); Flush(f);
  if r = 1 then WriteLn(f, 'handshake OK') else WriteLn(f, 'handshake ret='+IntToStr(r)); Flush(f);
  buf := 'POST /v2/translate HTTP/1.1'#13#10'Host: api-free.deepl.com'#13#10
         +'Content-Type: application/x-www-form-urlencoded'#13#10'Connection: close'#13#10#13#10
         +'text=hello&target_lang=IT';
  sent := BIO_write(web, @buf[1], Length(buf));
  WriteLn(f, 'BIO_write=', sent); Flush(f);
  SetLength(buf, 4096);
  rd := BIO_read(web, @buf[1], 4096);
  WriteLn(f, 'BIO_read=', rd); Flush(f);
  if rd > 0 then WriteLn(f, 'BODY>>>' + Copy(buf,1,300));
  BIO_free_all(web);
  SSL_CTX_free(ctx);
  WriteLn(f, 'done');
  Close(f);
end.
