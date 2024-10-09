#ifndef SC_MPLUGIN_API_H
#define SC_MPLUGIN_API_H

#if defined(WIN32) && (defined(SC_MPLUGIN_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_MPLUGIN_EXPORTS)
#  define SC_MPLUGIN_API __declspec(dllexport)
#  define SC_MPLUGIN_TEMPLATE_EXPORT
# else
#  define SC_MPLUGIN_API __declspec(dllimport)
#  define SC_MPLUGIN_TEMPLATE_EXPORT extern
# endif
#else
# define SC_MPLUGIN_API
# define SC_MPLUGIN_TEMPLATE_EXPORT
#endif

#endif
