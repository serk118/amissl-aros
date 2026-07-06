# AmiSSL Installation & Assign Setup

## Directory Layout

AmiSSL is installed under a single `AmiSSL:` assign (self-contained install):

```
AmiSSL:
├── Libs/
│   ├── amisslmaster.library       # master proxy library
│   └── AmiSSL/
│       └── amissl_v362.library    # actual OpenSSL implementation
├── Certs/                         # root CA certificates
├── UserCerts/                     # user-added certificates
├── Private/                       # private keys
├── OpenSSL                        # command-line tool
└── openssl.cnf                    # OpenSSL configuration
```

## S:User-Startup Entries

Add the following to `S:User-Startup`:

```
Assign AmiSSL: "SYS:AmiSSL"
If Exists AmiSSL:Libs
  Assign LIBS: AmiSSL:Libs ADD
EndIf
Path AmiSSL: ADD
```

- **`Assign AmiSSL:`** defines the `AmiSSL:` logical device pointing to the install directory.
- **`Assign LIBS: AmiSSL:Libs ADD`** extends `LIBS:` so `amisslmaster.library` is findable, and so the master library can resolve `LIBS:AmiSSL/amissl_v362.library` internally.
- **`Path AmiSSL: ADD`** (optional) lets you run `OpenSSL` from any shell without typing the full path.

A reboot (or `Execute S:User-Startup`) is required after adding these lines.

## Quick Test After Setup

Once installed and the assigns are active, test from a shell:

```sh
> amisslmaster_test
> amissl_v362_test
> httpget https://example.com
> https amissl.org 443
```

## Notes

- `amisslmaster.library` must always be the latest version installed.
- Different AmiSSL v5.x releases are backward-compatible — applications compiled for any AmiSSL v5 will automatically use the newest installed version.
- Old `amissl_v3??.library` files (v3.x) are automatically cleaned up by the installer.
- On AmigaOS 4, the layout differs: libraries go into `LIBS:` and `LIBS:AmiSSL/`, certificates into `DEVS:AmiSSL/`, and the tool into `C:`.
