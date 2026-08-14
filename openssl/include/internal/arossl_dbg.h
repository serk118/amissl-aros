#ifndef OSSL_INTERNAL_AROSSL_DBG_H
# define OSSL_INTERNAL_AROSSL_DBG_H
# pragma once

/*
 * Debug markers removed for final release build.
 * All arossl_dbg_* calls become no-ops so the call sites remain valid
 * but no debug output is produced on any platform.
 */

# if defined(__AROS__)

static inline void arossl_dbg_raw(const char *s, int n) { (void)s; (void)n; }
static inline void arossl_dbg_msg(const char *s)         { (void)s; }
static inline void arossl_dbg_val(const char *tag, long v) { (void)tag; (void)v; }

# endif /* __AROS__ */
#endif /* OSSL_INTERNAL_AROSSL_DBG_H */
