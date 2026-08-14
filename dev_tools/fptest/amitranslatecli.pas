program amitranslatecli;
{$mode objfpc}{$H+}
uses
  Classes, SysUtils,
  fphttpclient, fpjson, jsonparser,
  amissl, amisslsockets;

// Simple CLI DeepL translator using the SAME path as AmiTranslate:
// TFPHTTPClient.FormPost -> GetJSON -> FindPath('translations[0]')
// Writes diagnostics to SYS:atcli.txt

procedure LogOut(S: string; var f: TextFile);
begin
  WriteLn(f, S);
  Flush(f);
end;

var
  HP: TFPHTTPClient;
  RawStr, NTxt, SrcLang, DestLang, FormText, BaseURL: string;
  JData: TJSONData;
  JObject: TJSONObject;
  TransText: string;
  f: TextFile;
  c: Char;
  i: Integer;
begin
  AssignFile(f, 'SYS:atcli.txt');
  Rewrite(f);
  LogOut('AmiTranslate CLI started', f);

  if ParamCount < 1 then
  begin
    LogOut('usage: amitranslatecli "text to translate" [src] [dst]', f);
    CloseFile(f); Halt;
  end;

  NTxt := ParamStr(1);
  SrcLang := '';
  if ParamCount >= 3 then SrcLang := ParamStr(2);
  DestLang := 'IT';
  if ParamCount >= 2 then DestLang := ParamStr(2);

  // build form like Translate() does
  FormText := 'text=' + NTxt;
  if SrcLang <> '' then FormText := FormText + '&source_lang=' + SrcLang;
  FormText := FormText + '&target_lang=' + DestLang;

  BaseURL := 'https://api-free.deepl.com/v2/translate';
  LogOut('BaseURL=' + BaseURL, f);
  LogOut('FormText=' + FormText, f);

  HP := TFPHTTPClient.Create(nil);
  try
    HP.AllowRedirect := True;
    HP.AddHeader('User-Agent', 'AmiTranslateCLI x86_64-aros');
    try
      RawStr := HP.FormPost(BaseURL, FormText);
      LogOut('FormPost OK.', f);
    except
      on E: Exception do
      begin
        LogOut('FormPost EXCEPT: ' + E.Classname + ': ' + E.Message, f);
        CloseFile(f); Halt;
      end;
    end;

    LogOut('RawStrLen=' + IntToStr(Length(RawStr)), f);
    LogOut('BEGIN>>>' + Copy(RawStr, 1, 400), f);
    LogOut('END<<<' + Copy(RawStr, Length(RawStr) - 300, 300), f);
    LogOut('HAS_TERMINATOR_0CRLFCRLF=' + BoolToStr(Pos(#13#10'0'#13#10#13#10, RawStr) > 0, True), f);
    LogOut('HAS_CONN_CLOSE=' + BoolToStr(Pos('connection: close', LowerCase(RawStr)) > 0, True), f);

    try
      JData := GetJSON(RawStr, False);
      LogOut('GetJSON OK class=' + JData.ClassName, f);
      JObject := JData as TJSONObject;
      JData := JObject.FindPath('translations[0]');
      if JData is TJSONObject then
      begin
        JObject := JData as TJSONObject;
        TransText := JObject.Get('text', '');
        LogOut('TRANSLATION OK: ' + TransText, f);
      end
      else
        LogOut('FindPath translations[0] NOT a TJSONObject (grey-button branch)', f);
    except
      on E: Exception do
        LogOut('GetJSON EXCEPT: ' + E.Classname + ': ' + E.Message, f);
    end;
  finally
    HP.Free;
  end;
  LogOut('done', f);
  CloseFile(f);
end.
