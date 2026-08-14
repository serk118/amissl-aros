#ifndef OSSL_INTERNAL_AROSSL_DBG_H
# define OSSL_INTERNAL_AROSSL_DBG_H
# pragma once

# if defined(__AROS__)

#  if defined(AMISSL_HOSTED_AROS)

#   include <string.h>

static inline void arossl_dbg_raw(const char *s, int n)
{
    long _w;
    __asm__ __volatile__("syscall"
        : "=a"(_w)
        : "0"(1), "D"(2), "S"(s), "d"((long)n)
        : "rcx", "r11", "memory");
    (void)_w;
}

static inline void arossl_dbg_msg(const char *s)
{
    arossl_dbg_raw(s, (int)strlen(s));
}

static inline void arossl_dbg_val(const char *tag, long v)
{
    char b[80];
    int i, pos;
    static const char hex[] = "0123456789abcdef";

    b[0] = '[';
    for (pos = 1; *tag && pos < 16; pos++, tag++)
        b[pos] = *tag;
    b[pos++] = ']';
    b[pos++] = '=';
    b[pos++] = '0';
    b[pos++] = 'x';
    for (i = 60; i >= 0; i -= 4) {
        int nibble = (int)((v >> i) & 0xf);
        b[pos++] = hex[nibble];
    }
    b[pos++] = '\n';
    b[pos] = '\0';
    arossl_dbg_raw(b, pos);
}

#  else  /* native AROS */

static inline void arossl_dbg_raw(const char *s, int n) { (void)s; (void)n; }
static inline void arossl_dbg_msg(const char *s)         { (void)s; }
static inline void arossl_dbg_val(const char *tag, long v) { (void)tag; (void)v; }

#  endif /* AMISSL_HOSTED_AROS */

# endif /* __AROS__ */
#endif /* OSSL_INTERNAL_AROSSL_DBG_H */
