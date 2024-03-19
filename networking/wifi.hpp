/*******************************************************************************

Copyright 2024 openmini (openmini@gmail.com)

This file is part of openmini.

openmini is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

openmini is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
openmini. If not, see <https://www.gnu.org/licenses/>.

*******************************************************************************/
#pragma once
#include "../networking.hpp"
#include <future>
struct openmini::networking::wifi {
	struct access_point { // describes an access point
		uint8_t bssid[6]; // mac address
		std::string ssid;
		float rssi;
		enum security {
			open, // open
			wep, // wep
			wpa1_psk, // wpa psk
			wpa2_psk, // wpa2 psk
			wpa2_enterprise, // wpa2 enterprise
			wpa3_sae, // wpa3 sae
			wpa12_psk, // wpa 1/2 psk
			wpa23_psk, // wpa 2/3 psk/sae
			owe // opportunistic wireless encryption
		};
	};
	struct broadcast; // for creating an access point
	std::future<bool> connectAsync(access_point ap);
	bool connect(access_point ap);
	void poll(access_point ap);
	wifi(); // initializes the wifi subsystem
	~wifi(); // shuts down the wifi subsystem

};