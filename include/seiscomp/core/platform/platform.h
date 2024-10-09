#ifndef SEISCOMP_CORE_PLATFORM_H
#define SEISCOMP_CORE_PLATFORM_H

/* #undef MACOSX */
#define LINUX
#define SC_HAS_TIMER_CREATE
#define SC_HAS_EVENTFD
#define SC_HAS_EPOLL
/* #undef SC_HAS_KQUEUE */

#ifdef MACOSX
   #include <seiscomp/core/platform/osx.h>
#endif

#endif
