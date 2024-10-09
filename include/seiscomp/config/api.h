#ifndef SC_CONFIG_API_H
#define SC_CONFIG_API_H

#if defined(WIN32) && (defined(SC_CONFIG_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_CONFIG_EXPORTS)
#  define SC_CONFIG_API __declspec(dllexport)
#  define SC_CONFIG_TEMPLATE_EXPORT
# else
#  define SC_CONFIG_API __declspec(dllimport)
#  define SC_CONFIG_TEMPLATE_EXPORT extern
# endif
#else
# define SC_CONFIG_API
# define SC_CONFIG_TEMPLATE_EXPORT
#endif

#endif
