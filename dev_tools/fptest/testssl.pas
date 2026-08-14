program testssl;
{$mode objfpc}{$H+}
uses
  Classes, SysUtils, ssockets, sslsockets, amissl, amisslsockets;

var
  C: TSSLSocketHandler;
  Buf, Host: string;
  f: Text;
begin
  Assign(f, 'SYS:ssl.out'); Rewrite(f);
  WriteLn(f, 'start');
  try
    C := TSSLSocketHandler.Create;
    try
      Host := 'api-free.deepl.com';
      WriteLn(f, 'connecting ' + Host + ':443');
      if C.Connect(Host, 443) then
        WriteLn(f, 'connected active=', C.SSLActive)
      else
        WriteLn(f, 'CONNECT FAILED lastErr=', C.SSLLastError, ' ', C.SSLLastErrorString);
      C.Socket.SendString('GET / HTTP/1.1'#13#10'Host: ' + Host + #13#10'Connection: close'#13#10#13#10);
      Buf := C.Socket.RecvString(300);
      WriteLn(f, 'RECV len=', Length(Buf));
      WriteLn(f, 'BODY<<<' + Copy(Buf,1,500) + '>>>');
    finally
      C.Free;
    end;
  except
    on E: Exception do
      WriteLn(f, 'EXCEPT: ' + E.Classname + ': ' + E.Message);
  end;
  WriteLn(f, 'done');
  Close(f);
end.
