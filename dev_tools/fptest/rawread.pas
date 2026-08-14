program rawread;
{$mode objfpc}{$H+}
uses
  Classes, SysUtils, ssockets, sslsockets, amissl, amisslsockets;

var
  C: TSSLSocketHandler;
  f: TextFile;
  req: AnsiString;
  b: array[0..4095] of byte;
  n, total: Integer;
begin
  AssignFile(f, 'SYS:raw.log'); Rewrite(f);
  WriteLn(f, 'create'); Flush(f);
  C := TSSLSocketHandler.Create;
  try
    WriteLn(f, 'connect...'); Flush(f);
    if not C.Connect('api-free.deepl.com', 443) then
    begin
      WriteLn(f, 'CONNECT FAILED'); Flush(f); Close(f); Halt;
    end;
    WriteLn(f, 'CONNECT OK'); Flush(f);
    req := 'POST /v2/translate HTTP/1.1'#13#10
           'Host: api-free.deepl.com'#13#10
           'Content-Type: application/x-www-form-urlencoded'#13#10
           'Connection: close'#13#10#13#10
           'text=hello&target_lang=IT';
    C.Socket.SendData(@req[1], Length(req));
    WriteLn(f, 'POST sent len='+IntToStr(Length(req))); Flush(f);
    total := 0;
    repeat
      n := C.Socket.RecvData(@b[0], 4096);
      WriteLn(f, 'recv n='+IntToStr(n));
      if n > 0 then
      begin
        total := total + n;
        WriteLn(f, '  chunk: [' + Copy(Copy(AnsiString(@b[0]),1,n), n-30, n) + ']');
      end;
      Flush(f);
    until n <= 0;
    WriteLn(f, 'TOTAL='+IntToStr(total));
    WriteLn(f, 'DONE (got EOF, no hang)');
  finally
    C.Free;
  end;
  Close(f);
end.
