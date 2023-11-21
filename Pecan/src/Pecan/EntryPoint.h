#pragma once

#ifdef PN_PLATFORM_WINDOWS

extern Pecan::Application* Pecan::createApplication();

int main(int argc, char** argv) {
	Pecan::Application* application = Pecan::createApplication();
	application->run();
	delete application;
	return 0;
}

#endif