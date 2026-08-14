program sslconnect;
{$mode objfpc}{$H+}
uses
  Classes, SysUtils, ssockets, sslsockets, amissl, amisslsockets;

var
  C: TSSLSocketHandler;
  f: TextFile;
begin
  AssignFile(f, 'SYS:sslconn.log'); Rewrite(f);
  WriteLn(f, 'create handler'); Flush(f);
  C := TSSLSocketHandler.Create;
  WriteLn(f, 'handler created'); Flush(f);
  WriteLn(f, 'calling Connect...'); Flush(f);
  if C.Connect('api-free.deepl.com', 443) then
    WriteLn(f, 'CONNECT OK active=', C.SSLActive) 
  else
    WriteLn(f, 'CONNECT FAILED'); 
  Flush(f);
  WriteLn(f, 'connect returned'); Flush(f);
  C.Free;
  WriteLn(f, 'freed'); Flush(f);
  Close(f);
end.
