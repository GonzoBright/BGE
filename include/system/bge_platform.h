#ifndef BGE_PLATFORM_H
#define BGE_PLATFORM_H

//
// NOTE:
//
//	Define pre-processor macros for DLL export/import, and
//	system macros.
//

#ifdef _WIN32
	#define BGE_SYS_WINDOWS
	#ifndef NOMINMAX
		#define NOMINMAX
	#endif
#elif defined (__linux__)
	#define BGE_SYS_LINUX
#elif defined (__APPLE__)
	#define BGE_SYS_MACOS
#else
	#error Your system is not supported by BGE
#endif

#ifndef BGE_STATIC_BUILD
	#ifdef BGE_SYS_WINDOWS
		#ifdef BGE_NONCLIENT_BUILD
			#ifndef BGE_API
				#define BGE_API __declspec(dllexport)
			#endif
		#else
			#ifndef BGE_API
				#define BGE_API __declspec(dllimport)
			#endif
		#endif

		// Visual C++ compiler warning C4251 suppression
		#ifdef _MSC_VER
			#pragma warning(disable : 4251)
		#endif
	#else // Linux and Mac OS X
		#ifdef __GNUC__ >= 4
			#define BGE_API __attribute__ ((__visibility__("default")))
		#else
			#define BGE_API BGE_API
		#endif
	#endif
#else
	#define BGE_API
	#define BGE_API
#endif

#endif	// ifndef BGE_PLATFORM_H