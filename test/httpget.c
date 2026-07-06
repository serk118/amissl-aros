/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

/*
 * This example program demonstrates how to use the HTTP client function
 * OSSL_HTTP_get() and URL parsing function OSSL_HTTP_parse_url(), which
 * were newly introduced in OpenSSL 3.0 and AmiSSL v5.
 *
 * These allow any application to load http or https URLs completely
 * within AmiSSL v5, without the need for any other external libraries,
 * such as libcurl, or custom code. OSSL_HTTP_get() is the highest level
 * function provided by the HTTP client, but you can have more control by
 * using the lower level HTTP functions described in the OpenSSL manual at
 * https://www.openssl.org/docs/man3.0/man3/OSSL_HTTP_get.html
 */

#if defined(__amigaos4__) && !defined(__USE_INLINE__)
# define __USE_INLINE__
#endif

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <proto/amisslmaster.h>

#include <amissl/amissl.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>
#include <amissl/tags.h>
#include <utility/tagitem.h>

#if !defined(__amigaos4__)
# include <SDI_compiler.h>
#endif

static int my_strlen(const char *s)
{
    int n = 0;
    while (*s++) n++;
    return n;
}

static int my_strncmp(const char *a, const char *b, int n)
{
    while (n-- > 0 && *a && *a == *b) { a++; b++; }
    return n < 0 ? 0 : (unsigned char)*a - (unsigned char)*b;
}

static void my_memset(void *p, int c, int n)
{
    unsigned char *q = (unsigned char *)p;
    while (n--) *q++ = (unsigned char)c;
}

long __stack = 1024 * 1024;

static SSL_CTX *Init(void);
static void Cleanup(SSL_CTX *ctx);

/* Check if URL is valid and extract any username/password
 */
BOOL IsSupportedURL(char *url, char **userinfo)
{
	int ssl, portnum;
	char *host, *port, *path, *query, *fragment;

	/* You may wish to make use of OSSL_parse_url() which can be
	 * used to parse non-http(s) URLs too
	 */
	return OSSL_HTTP_parse_url(url, &ssl, userinfo, &host, &port,
				   &portnum, &path, &query, &fragment);
}

/* Required callback to enable HTTPS connection, when necessary
 */
SAVEDS STDARGS BIO *HTTP_TLS_cb(BIO *bio, void *arg, int connect, int detail)
{
	if (connect && detail)
	{
	 	/* Connect with TLS */
		BIO *sbio = BIO_new_ssl((SSL_CTX *)arg, 1);
		bio = (sbio != NULL) ? BIO_push(sbio, bio) : NULL;
	}

	return bio;
}

/* Read content from URL and dump to Output()
 */
static int parse_url_hostport(const char *url, char *host, int hostlen, int *port)
{
    const char *p;
    int i;

    /* Skip http:// or https:// */
    if (my_strncmp(url, "https://", 8) == 0) {
        *port = 443;
        p = url + 8;
    } else if (my_strncmp(url, "http://", 7) == 0) {
        *port = 80;
        p = url + 7;
    } else {
        return 0;
    }

    /* Extract host */
    for (i = 0; i < hostlen - 1 && *p && *p != '/' && *p != ':'; i++)
        host[i] = *p++;
    host[i] = '\0';

    /* Check for explicit port */
    if (*p == ':') {
        p++;
        *port = 0;
        while (*p >= '0' && *p <= '9') {
            *port = *port * 10 + (*p - '0');
            p++;
        }
    }
    return 1;
}

BOOL GetURL(char *url, char *userinfo, SSL_CTX *sslctx)
{
    BIO *sbio, *bio, *bio_err;
    char host[256];
    int port;
    char request[512];
    char buffer[2048];
    int len, ret;
    int slen;

    /* Parse URL manually */
    if (!parse_url_hostport(url, host, sizeof(host), &port)) {
        Printf("Invalid URL\n");
        return FALSE;
    }
    Printf("[G1] host=%s port=%d\n", host, port);

    /* Build host:port string */
    {
        char hostport[280];
        int pos = 0;
        int i;
        for (i = 0; host[i] && i < 250; i++) hostport[pos++] = host[i];
        hostport[pos++] = ':';
        {
            int p = port;
            char pbuf[12];
            int ppos = 0;
            if (p == 0) pbuf[ppos++] = '0';
            else {
                char tmp[12];
                int tpos = 0;
                while (p > 0) { tmp[tpos++] = '0' + (p % 10); p /= 10; }
                while (tpos > 0) pbuf[ppos++] = tmp[--tpos];
            }
            for (i = 0; i < ppos; i++) hostport[pos++] = pbuf[i];
        }
        hostport[pos] = '\0';

        /* Test BIO_new_ex steps individually */
        Printf("[G2] Testing OPENSSL_zalloc...\n");
        {
            void *p = OPENSSL_zalloc(64);
            Printf("[G2a] zalloc=%p\n", p);
            if (p) OPENSSL_free(p);
        }
        Printf("[G2b] Testing manual CRYPTO_new_ex_data...\n");
        {
            CRYPTO_EX_DATA ed;
            int r = CRYPTO_new_ex_data(1, NULL, &ed);
            Printf("[G2c] CRYPTO_new_ex_data=%d\n", r);
        }
        Printf("[G2d] Testing BIO_new(BIO_s_connect())...\n");
        {
            BIO *tb = BIO_new(BIO_s_connect());
            Printf("[G2e] connect BIO=%p\n", (void*)tb);
            if (tb) BIO_free(tb);
        }
        Printf("[G2f] Testing BIO_new(BIO_f_ssl())...\n");
        {
            BIO *tb = BIO_new(BIO_f_ssl());
            Printf("[G2g] f_ssl BIO=%p\n", (void*)tb);
            if (tb) BIO_free(tb);
        }
        Printf("[G2h] Testing SSL_CTX_up_ref...\n");
        {
            int r = SSL_CTX_up_ref(sslctx);
            Printf("[G2i] SSL_CTX_up_ref=%d\n", r);
        }
        Printf("[G2j] Testing CRYPTO_THREAD_lock_new (for ssl->lock)...\n");
        {
            void *lk = CRYPTO_THREAD_lock_new();
            Printf("[G2k] lock=%p\n", lk);
            if (lk) CRYPTO_THREAD_lock_free(lk);
        }
        Printf("[G2l] Creating SSL BIO chain...\n");
        {
            SSL *ssl_obj = SSL_new(sslctx);
            if (ssl_obj) {
                SSL_set_connect_state(ssl_obj);
                BIO *conn = BIO_new(BIO_s_connect());
                if (conn) {
                    BIO *ssl = BIO_new(BIO_f_ssl());
                    if (ssl) {
                        BIO_set_ssl(ssl, ssl_obj, 1);
                        sbio = BIO_push(ssl, conn);
                    } else {
                        SSL_free(ssl_obj);
                        BIO_free(conn);
                    }
                } else {
                    SSL_free(ssl_obj);
                }
            }
        }
        Printf("[G2m] sbio=%p\n", (void*)sbio);
        if (!sbio) {
            Printf("BIO chain creation failed\n");
            return FALSE;
        }
        Printf("[G3] Connecting to %s...\n", hostport);
        BIO_set_conn_hostname(sbio, hostport);

        /* Set SNI */
        {
            SSL *ssl = NULL;
            BIO_get_ssl(sbio, &ssl);
            if (ssl)
                SSL_set_tlsext_host_name(ssl, host);
        }

        /* Connect */
        Printf("[G4] BIO_do_connect...\n");
        if (BIO_do_connect(sbio) <= 0) {
            Printf("BIO_do_connect failed\n");
            if ((bio_err = BIO_new_fp_amiga(Output(), BIO_NOCLOSE | BIO_FP_TEXT)) != NULL) {
                ERR_print_errors(bio_err);
                BIO_free(bio_err);
            }
            BIO_free_all(sbio);
            return FALSE;
        }
    }
    Printf("[G5] Connected, sending request...\n");

    /* Send HTTP request */
    {
        char req[1024];
        int pos = 0;
        const char *get = "GET ";
        const char *httpver = " HTTP/1.0\r\nHost: ";
        const char *crlf = "\r\n\r\n";
        const char *path;
        int i;

        /* Find path in URL */
        path = url;
        while (*path && *path != '/') path++;
        if (*path == '\0') path = "/";

        for (i = 0; get[i]; i++) req[pos++] = get[i];
        for (i = 0; path[i] && i < 400; i++) req[pos++] = path[i];
        for (i = 0; httpver[i]; i++) req[pos++] = httpver[i];
        for (i = 0; host[i]; i++) req[pos++] = host[i];
        req[pos++] = '\r'; req[pos++] = '\n'; req[pos++] = '\r'; req[pos++] = '\n';
        req[pos] = '\0';

        Printf("[G6] Sending: GET %s HTTP/1.0...\n", path);
        BIO_puts(sbio, req);
    }

    /* Read response */
    Printf("[G7] Reading response...\n");
    while ((len = BIO_read(sbio, buffer, sizeof(buffer) - 1)) > 0) {
        buffer[len] = '\0';
        FWrite(Output(), buffer, 1, len);
    }

    Printf("[G8] Read complete (len=%d)\n", len);
    BIO_free_all(sbio);
    Printf("[G9] Done\n");
    return TRUE;
}

int main(int argc, char *argv[])
{
	BOOL is_ok = FALSE;
	SSL_CTX *sslctx = NULL;

	Printf("[H1] httpget v2 started\n");

	if (argc > 1)
	{
		Printf("[H2] URL=%s\n", argv[1]);
		Printf("[H2a] argc=%d\n", argc);
		/* Open required OS libraries and initialize AmiSSL */
		if ((sslctx = Init()) != NULL)
		{
			Printf("[H3] Init OK, calling GetURL...\n");
			/* Open the URL and dump the response to Output() */
			is_ok = GetURL(argv[1], NULL, sslctx);
		}
		else
			Printf("[H3a] Init returned NULL\n");

		Printf("[H4] Cleanup...\n");
		/* Free resources */
		Cleanup(sslctx);
	}
	else
		Printf("Usage: %s [url] (http:// and https:// supported)\n", argv[0]);

	return(is_ok ? RETURN_OK : RETURN_ERROR);
}

#if defined(USE_AUTOINIT)

/* Link with -lamisslauto
 */

LONG UsesOpenSSLStructs = FALSE;

static SSL_CTX *Init(void)
{
	SSL_CTX *ctx;

	if (!(ctx = SSL_CTX_new(TLS_client_method())))
		Printf("Couldn't create SSL context!\n");

	return ctx;
}

static void Cleanup(SSL_CTX *ctx)
{
	SSL_CTX_free(ctx);
}

#else

struct Library *AmiSSLMasterBase, *SocketBase;

# if defined(__amigaos4__)
struct AmiSSLMasterIFace *IAmiSSLMaster;
struct AmiSSLIFace *IAmiSSL;
struct SocketIFace *ISocket;
#  define GETINTERFACE(iface, base) (iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#  define DROPINTERFACE(iface)      (DropInterface((struct Interface *)iface), iface = NULL)
# else
struct Library *AmiSSLBase, *AmiSSLExtBase;
#  define GETINTERFACE(iface, base) TRUE
#  define DROPINTERFACE(iface)
# endif

# define XMKSTR(x) #x
# define MKSTR(x)  XMKSTR(x)

/* Open and initialize AmiSSL
 */
static SSL_CTX *Init(void)
{
	SSL_CTX *ctx = NULL;

	Printf("[I1] Opening bsdsocket.library...\n");
	if (!(SocketBase = OpenLibrary("bsdsocket.library", 4)))
		Printf("[I1a] FAILED\n");
	else
	{
		Printf("[I2] SocketBase=%p\n", SocketBase);
		Printf("[I3] Opening amissl_v362.library...\n");
		if (!(AmiSSLBase = OpenLibrary("amissl_v362.library", 0)))
			Printf("[I3a] FAILED\n");
		else
		{
		Printf("[I4] AmiSSLBase=%p\n", AmiSSLBase);
		AmiSSLExtBase = AmiSSLBase;
		Printf("[I4a] AmiSSLExtBase=%p\n", AmiSSLExtBase);
		Printf("[I5] InitAmiSSLA...\n");
		{
		    struct TagItem tags[2];
		    tags[0].ti_Tag = AmiSSL_SocketBase;
		    tags[0].ti_Data = (IPTR)SocketBase;
		    tags[1].ti_Tag = TAG_END;
		    if (InitAmiSSLA(tags) != 0) {
			Printf("[I5a] FAILED\n");
		    } else {
			Printf("[I6] InitAmiSSLA OK\n");
			Printf("[I7] SSL_CTX_new...\n");
			if (!(ctx = SSL_CTX_new(TLS_client_method())))
				Printf("[I7a] FAILED\n");
			else
				Printf("[I8] SSL_CTX_new=%p\n", ctx);
		}
			}
	    }
	    }

	    return ctx;
}

/* Close AmiSSL
 */
static void Cleanup(SSL_CTX *ctx)
{
	Printf("[C1] Cleanup AmiSSLBase=%p ctx=%p SocketBase=%p\n", AmiSSLBase, ctx, SocketBase);
	if (AmiSSLBase)
	{
		Printf("[C2] SSL_CTX_free...\n");
		SSL_CTX_free(ctx);
		Printf("[C3] CleanupAmiSSLA...\n");
		CleanupAmiSSLA(NULL);
		Printf("[C4] CloseLibrary AmiSSLBase...\n");
		CloseLibrary(AmiSSLBase);
		AmiSSLBase = NULL;
	}

	Printf("[C5] CloseLibrary SocketBase...\n");
	CloseLibrary(SocketBase);
	SocketBase = NULL;
	Printf("[C6] Cleanup done\n");
}

#endif /* !USE_AUTOINIT */
