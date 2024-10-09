#ifndef SC_QCPLUGIN_API_H
#define SC_QCPLUGIN_API_H

#if defined(WIN32) && (defined(SC_QCPLUGIN_SHARED) || defined(SC_ALL_SHARED))
# if defined(SC_QCPLUGIN_EXPORTS)
#  define SC_QCPLUGIN_API __declspec(dllexport)
#  define SC_QCPLUGIN_TEMPLATE_EXPORT
# else
#  define SC_QCPLUGIN_API __declspec(dllimport)
#  define SC_QCPLUGIN_TEMPLATE_EXPORT extern
# endif
#else
# define SC_QCPLUGIN_API
# define SC_QCPLUGIN_TEMPLATE_EXPORT
#endif

#endif
