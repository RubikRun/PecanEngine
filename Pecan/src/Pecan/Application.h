#pragma once

#include "Core.h"

namespace Pecan {

	class PECAN_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void run();
	};

	// To be defined in client
	Application* createApplication();

} // namespace Pecan