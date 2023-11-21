#include "Pecan.h"

class Sandbox : public Pecan::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Pecan::Application* Pecan::createApplication() {
	return new Sandbox;
}