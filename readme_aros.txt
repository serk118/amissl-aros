AmiSSL 5.27 for AROS x86_64 - README (readme_aros)
==================================================
Build date: August 15, 2026  (OpenSSL 3.6.2 based, native x86_64 AROS)

This package contains the working, verified AmiSSL libraries plus test
tools and AmiTranslate. TLS/HTTPS to DeepL is confirmed working end-to-end
on real AROS hardware (handshake, POST, chunked response).

CONTENTS
--------
  AmiSSL/Libs/AmiSSL/amissl_v362.library    main AmiSSL library (native, md5 64027ebf)
  AmiSSL/Libs/AmiSSL/amisslmaster.library   AmiSSL master library
  AmiSSL/tools/AmiTranslate                 AmiTranslate app (grey-button fix)
  AmiSSL/tools/AmiTranslate_x64             AmiTranslate app (x86_64 native)
  AmiSSL/tools/deeplkey.key                 DeepL API key file (PLACEHOLDER - see below)
  AmiSSL/tools/httpget_simple               minimal HTTPS download check
  AmiSSL/tools/httpget_bio                  HTTPS check using the BIO-connect path
  AmiSSL/tools/httpget_default              HTTPS check with a default context
  AmiSSL/tools/provider_test                provider diagnostics (optional)
  readme_aros.txt                           this file

INSTALL - WHERE TO COPY THE LIBRARIES
-------------------------------------
Copy BOTH .library files over your existing AmiSSL libraries. On AROS,
OpenLibrary resolves Libs: first for amissl_v362.library, so if you have a
copy in SYS:Libs/ you must update that one too (it is the one actually used).

  Copy amissl_v362.library   SYS:Libs/AmiSSL/
  Copy amissl_v362.library   SYS:Libs/              (if a copy already exists there)
  Copy amisslmaster.library  SYS:Libs/AmiSSL/
  Copy amisslmaster.library  SYS:Libs/              (if a copy already exists there)

Optional (so programs using "AmiSSL:" finds them):
  Assign "AmiSSL:" "SYS:AmiSSL"
  Assign "LIBS:" "AmiSSL:Libs" ADD

Replace your AmiTranslate binary with AmiSSL/tools/AmiTranslate (or
AmiTranslate_x64) from this package.

GETTING A DEEPL API KEY
-----------------------
AmiTranslate needs a DeepL API key to translate. Get a free one at:
      https://www.deepl.com/pro-api    (choose "API Free")

HOW TO GIVE AMITRANSLATE THE KEY (no rebuild needed)
----------------------------------------------------
1. Place an AmiTranslate.info icon tooltype:
       DEEPLKEY=your-api-id:fx
   (window title will show "<custom API Key>" when read at startup.)
   OR
2. Use the deeplkey.key file (preferred, keeps the key out of the binary):
   - Open  AmiSSL/tools/deeplkey.key  in an editor.
   - The file is a PLACEHOLDER. DELETE the placeholder line and type your
     real key on ONE line, exactly as shown below, then save:
       DEEPLKEY-xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx:fx
   - Leave the file in the SAME folder as the AmiTranslate executable
     (e.g. PROGDIR:deeplkey.key).
   The key is read at runtime only - it is NOT compiled into the binary, so
   your key is never shared in any download.

Key priority:  deeplkey.key file (same folder)  >  icon DEEPLKEY tooltype
               >  compiled placeholder.

USAGE
-----
Run AmiTranslate, type some text, click Translate.

Expected:
- With a valid key: the output text field is filled with the translation.
- With a placeholder/invalid key: a message box shows DeepL's JSON reply
  (e.g. {"message":"Forbidden...","request_id":...}). This is CORRECT and
  proves the network path works; it is NOT a hang.
- No grey Translate button and no overall slowdown after a translation.

DIAGNOSTICS
-----------
AmiTranslate writes a short step log to SYS:t.log. If you hit a problem,
send that file back along with which tool ran. You can also sanity-check the
HTTPS path with:
  httpget_simple / httpget_bio  - they print r/err, the negotiated cipher,
  the HTTP code and how many bytes downloaded; both should end with a
  download of https://www.openssl.org/ .
