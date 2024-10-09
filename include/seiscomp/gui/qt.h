#ifndef SC_GUI_API_H
#define SC_GUI_API_H

#if defined(WIN32) && (defined(SC_GUI_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_GUI_EXPORTS)
#  define SC_GUI_API __declspec(dllexport)
#  define SC_GUI_TEMPLATE_EXPORT
# else
#  define SC_GUI_API __declspec(dllimport)
#  define SC_GUI_TEMPLATE_EXPORT extern
# endif
#else
# define SC_GUI_API
# define SC_GUI_TEMPLATE_EXPORT
#endif

#endif
