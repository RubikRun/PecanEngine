#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Pecan {

	class PECAN_API Log
	{
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_clientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_coreLogger;
		static std::shared_ptr<spdlog::logger> s_clientLogger;
	};

} // namespace Pecan

// Core log macros
#define PN_CORE_TRACE(...)  ::Pecan::Log::getCoreLogger()->trace(__VA_ARGS__)
#define PN_CORE_INFO(...)   ::Pecan::Log::getCoreLogger()->info(__VA_ARGS__)
#define PN_CORE_WARN(...)   ::Pecan::Log::getCoreLogger()->warn(__VA_ARGS__)
#define PN_CORE_ERROR(...)  ::Pecan::Log::getCoreLogger()->error(__VA_ARGS__)
#define PN_CORE_CRITICAL(...)  ::Pecan::Log::getCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define PN_TRACE(...)  ::Pecan::Log::getClientLogger()->trace(__VA_ARGS__)
#define PN_INFO(...)   ::Pecan::Log::getClientLogger()->info(__VA_ARGS__)
#define PN_WARN(...)   ::Pecan::Log::getClientLogger()->warn(__VA_ARGS__)
#define PN_ERROR(...)  ::Pecan::Log::getClientLogger()->error(__VA_ARGS__)
#define PN_CRITICAL(...)  ::Pecan::Log::getClientLogger()->critical(__VA_ARGS__)