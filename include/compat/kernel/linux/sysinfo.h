#ifndef _IP_COMPAT_LINUX_SYSINFO_H
#define _IP_COMPAT_LINUX_SYSINFO_H

/* In case the kernel header asm/posix_types.h is too old (< 3.4) to provide
 * __kernel_long_t, provide it here
 */
#ifndef __kernel_long_t
typedef long		__kernel_long_t;
typedef unsigned long	__kernel_ulong_t;
#endif

#include_next <linux/sysinfo.h>

#endif /* _IP_COMPAT_LINUX_SYSINFO_H */
