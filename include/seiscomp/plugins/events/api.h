#ifndef SC_EVPLUGIN_API_H
#define SC_EVPLUGIN_API_H

#if defined(WIN32) && (defined(SC_EVPLUGIN_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_EVPLUGIN_EXPORTS)
#  define SC_EVPLUGIN_API __declspec(dllexport)
#  define SC_EVPLUGIN_TEMPLATE_EXPORT
# else
#  define SC_EVPLUGIN_API __declspec(dllimport)
#  define SC_EVPLUGIN_TEMPLATE_EXPORT extern
# endif
#else
# define SC_EVPLUGIN_API
# define SC_EVPLUGIN_TEMPLATE_EXPORT
#endif

#endif
