#ifndef SC_DAPLUGIN_API_H
#define SC_DAPLUGIN_API_H

#if defined(WIN32) && (defined(SC_DAPLUGIN_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_DAPLUGIN_EXPORTS)
#  define SC_DAPLUGIN_API __declspec(dllexport)
#  define SC_DAPLUGIN_TEMPLATE_EXPORT
# else
#  define SC_DAPLUGIN_API __declspec(dllimport)
#  define SC_DAPLUGIN_TEMPLATE_EXPORT extern
# endif
#else
# define SC_DAPLUGIN_API
# define SC_DAPLUGIN_TEMPLATE_EXPORT
#endif

#endif
