#ifndef _IP_COMPAT_BITS_SOCKET_H
#define _IP_COMPAT_BITS_SOCKET_H

#include_next <bits/socket.h>

#ifndef AF_VSOCK
#define PF_VSOCK	40
#define AF_VSOCK	PF_VSOCK
#undef PF_MAX
#undef AF_MAX
#define PF_MAX		41
#define AF_MAX		PF_MAX
#endif /* AF_VSOCK */

#endif /* _IP_COMPAT_BITS_SOCKET_H */
