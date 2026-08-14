program testformpost;
{$mode objfpc}{$H+}
uses
  Classes, SysUtils, fphttpclient,
  fpjson, jsonparser,
  amissl, amisslsockets;

var
  HP: TFPHTTPClient;
  RawStr: string;
  JData: TJSONData;
  f: Text;
  BaseURL: string;
begin
  Assign(f, 'SYS:fp.out'); Rewrite(f);
  BaseURL := 'https://api-free.deepl.com/v2/translate';
  HP := TFPHTTPClient.Create(nil);
  try
    HP.AllowRedirect := True;
    HP.AddHeader('User-Agent', 'testssl-fpc x86_64-aros');
    WriteLn(f, 'BaseURL=', BaseURL);
    try
      RawStr := HP.FormPost(BaseURL, 'text=Hello&target_lang=DE');
      WriteLn(f, 'FormPost OK.');
    except
      on E: Exception do
      begin
        WriteLn(f, 'FormPost EXCEPT: ' + E.Classname + ': ' + E.Message);
        Close(f);
        Halt;
      end;
    end;
    WriteLn(f, 'RawStrLen=', Length(RawStr));
    WriteLn(f, 'BEGIN>>>' + Copy(RawStr,1,300));
    WriteLn(f, 'END<<<' + Copy(RawStr, Length(RawStr)-200, 200));
    try
      JData := GetJSON(RawStr, False);
      WriteLn(f, 'GetJSON OK class=', JData.ClassName);
      if JData is TJSONObject then
        WriteLn(f, 'FindPath=',
          JData.FindPath('translations[0].text').AsString)
      else
        WriteLn(f, 'not a JSONObject');
    except
      on E: Exception do
        WriteLn(f, 'GetJSON EXCEPT: ' + E.Classname + ': ' + E.Message);
    end;
  finally
    HP.Free;
  end;
  WriteLn(f, 'done');
  Close(f);
end.
