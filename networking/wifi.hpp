#pragma once
#include "../networking.hpp"
struct openmini::networking::wifi {
	struct access_point { // describes an access point
		uint8_t bssid[6]; // mac address
		std::string ssid;
		float rssi;
		enum security {};
	};
	struct broadcast; // for creating an access point
	
};