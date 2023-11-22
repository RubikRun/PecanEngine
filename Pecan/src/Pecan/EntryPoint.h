#pragma once

#ifdef PN_PLATFORM_WINDOWS

extern Pecan::Application* Pecan::createApplication();

int main(int argc, char** argv) {
	Pecan::Log::init();

	// Example of using the logger
	{
		PN_CORE_WARN("Testing the logger with this warning logged from the Pecan core");
		PN_INFO("Logging another message that is info from a Pecan app");
		int a = 5;
		std::string s = "content_of_a_string";
		PN_CRITICAL("And one last time, logging a critical msg from a Pecan app"
			" with an int and a string variable: int_var={0}, str_var=\"{1}\"", a, s);
	}

	Pecan::Application* application = Pecan::createApplication();
	application->run();
	delete application;
	return 0;
}

#endif