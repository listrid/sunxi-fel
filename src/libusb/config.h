/* config.h.  Manual config for MSVC.  */

#ifndef _MSC_VER

// Define to the attribute for default visibility.
#define DEFAULT_VISIBILITY __attribute__ ((visibility ("default")))

#else

/* Visual Studio 2013 or later is required */
#if (_MSC_VER < 1800)
#error "Visual Studio 2013 or later is required."
#endif

/* Visual Studio 2013 and 2015 do not support __func__ */
#if (_MSC_VER <= 1900)
#define __func__ __FUNCTION__
#endif

/* Visual Studio 2015 and later defines timespec */
#if (_MSC_VER >= 1900)
#define _TIMESPEC_DEFINED 1
#endif

/* Disable: warning C4127: conditional expression is constant */
#pragma warning(disable:4127)
/* Disable: warning C4200: nonstandard extension used : zero-sized array in struct/union */
#pragma warning(disable:4200)
/* Disable: warning C4201: nonstandard extension used : nameless struct/union */
#pragma warning(disable:4201)
/* Disable: warning C4324: structure was padded due to __declspec(align()) */
#pragma warning(disable:4324)
/* Disable: warning C4996: 'GetVersionExA': was declared deprecated */
#pragma warning(disable:4996)

#if defined(_PREFAST_)
/* Disable "Banned API" errors when using the MS's WDK OACR/Prefast */
#pragma warning(disable:28719)
/* Disable "The function 'InitializeCriticalSection' must be called from within a try/except block" */
#pragma warning(disable:28125)
#endif

/* Define to the attribute for default visibility. */
#define DEFAULT_VISIBILITY /**/

#endif





/* Define to 1 to start with debug message logging enabled. */
/* #undef ENABLE_DEBUG_LOGGING */

/* Define to 1 to enable message logging. */
//#define ENABLE_LOGGING 1

#ifdef _MSC_VER

/* Define to 1 if compiling for a Windows platform. */
#define PLATFORM_WINDOWS 1

#else
#define PLATFORM_POSIX 1
//Define to 1 if you have the `clock_gettime' function
#define HAVE_CLOCK_GETTIME 1
//Define to 1 if the system has eventfd functionality.
#define HAVE_EVENTFD 1
// Define to 1 if the system has timerfd functionality.
#define HAVE_TIMERFD 1
// Define to 1 if the system has the type `nfds_t'.
#define HAVE_NFDS_T 1
// Define to 1 if you have the `pipe2' function.
#define HAVE_PIPE2 1
// Define to 1 if you have the `pthread_condattr_setclock' function.
#define HAVE_PTHREAD_CONDATTR_SETCLOCK 1
// Define to 1 if you have the `pthread_setname_np' function.
#define HAVE_PTHREAD_SETNAME_NP 1
//Define to 1 if you have the `udev' library (-ludev). 
#define HAVE_LIBUDEV 1

#define _GNU_SOURCE 1


#endif

/* Define to the attribute for enabling parameter checks on printf-like
   functions. */
#define PRINTF_FORMAT(a, b) /**/

/* Define to 1 to output logging messages to the systemwide log. */
/* #undef USE_SYSTEM_LOGGING_FACILITY */
