#pragma once

#ifdef PN_PLATFORM_WINDOWS
	#ifdef PN_BUILD_DLL
		#define PECAN_API __declspec(dllexport)
	#else
		#define PECAN_API __declspec(dllimport)
	#endif
#else
	#error Pecan only supports Windows!
#endif