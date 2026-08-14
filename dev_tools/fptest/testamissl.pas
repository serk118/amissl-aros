program testamissl;
{$mode objfpc}{$H+}
uses
  Classes, SysUtils, amissl;

var
  f: Text;
begin
  Assign(f, 'SYS:amitest.out');
  Rewrite(f);
  WriteLn(f, 'AmiSSLMasterBase=', LongInt(PtrUInt(AmiSSLMasterBase)));
  WriteLn(f, 'AmiSSLBase=', LongInt(PtrUInt(AmiSSLBase)));
  if not Assigned(AmiSSLBase) then
    WriteLn(f, 'NO AMISSL BASE - library open failed')
  else
    WriteLn(f, 'AMISSL OK');
  Close(f);
end.
