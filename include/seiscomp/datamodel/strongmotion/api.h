#ifndef SC_STRONGMOTION_API_H
#define SC_STRONGMOTION_API_H

#if defined(WIN32) && (defined(SC_STRONGMOTION_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_STRONGMOTION_EXPORTS)
#  define SC_STRONGMOTION_API __declspec(dllexport)
#  define SC_STRONGMOTION_TEMPLATE_EXPORT
# else
#  define SC_STRONGMOTION_API __declspec(dllimport)
#  define SC_STRONGMOTION_TEMPLATE_EXPORT extern
# endif
#else
# define SC_STRONGMOTION_API
# define SC_STRONGMOTION_TEMPLATE_EXPORT
#endif

#endif
