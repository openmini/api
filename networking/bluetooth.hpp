#pragma once
#include "../networking.hpp"
struct openmini::networking::bluetooth {
	struct device {
		uint8_t mac[6];
		std::string name;
		float rssi;
	};
};