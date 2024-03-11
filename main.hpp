#pragma once
#include <cstdint>
#include <string>
struct openmini {
	std::string identity;
	struct screen;
	struct input;
	struct networking;
	struct bus;
	struct security;
};