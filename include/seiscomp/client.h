#ifndef SC_SYSTEM_CLIENT_API_H
#define SC_SYSTEM_CLIENT_API_H

#if defined(WIN32) && (defined(SC_SYSTEM_CLIENT_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_SYSTEM_CLIENT_EXPORTS)
#  define SC_SYSTEM_CLIENT_API __declspec(dllexport)
#  define SC_SYSTEM_CLIENT_TEMPLATE_EXPORT
# else
#  define SC_SYSTEM_CLIENT_API __declspec(dllimport)
#  define SC_SYSTEM_CLIENT_TEMPLATE_EXPORT extern
# endif
#else
# define SC_SYSTEM_CLIENT_API
# define SC_SYSTEM_CLIENT_TEMPLATE_EXPORT
#endif

#endif
