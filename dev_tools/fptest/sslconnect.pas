program sslconnect;
{$mode objfpc}{$H+}
uses
  Classes, SysUtils, ssockets, sslsockets, amissl, amisslsockets;

var
  C: TSSLSocketHandler;
  Sock: TInetSocket;
  f: TextFile;
begin
  AssignFile(f, 'SYS:sslconn.log'); Rewrite(f);
  WriteLn(f, 'create inetsocket'); Flush(f);
  Sock := TInetSocket.Create;
  Sock.Host := 'api-free.deepl.com';
  Sock.Port := 443;
  WriteLn(f, 'create sslhandler'); Flush(f);
  C := TSSLSocketHandler.Create;
  C.Socket := Sock;
  WriteLn(f, 'calling Connect...'); Flush(f);
  if C.Connect then
    WriteLn(f, 'CONNECT OK active=', C.SSLActive)
  else
    WriteLn(f, 'CONNECT FAILED');
  Flush(f);
  C.Free;
  Sock.Free;
  WriteLn(f, 'done'); Flush(f);
  Close(f);
end.
