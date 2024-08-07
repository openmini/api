/*******************************************************************************

Copyright 2024 openmini (copyright@openmini.org)

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
#include "main.hpp"
#include <cstdint>
#include <string>
struct openmini::modules {
	enum identifier : uint16_t {
		unknown,
		keyboard
	};
	struct protocol;
	struct module {
		static constexpr identifier id {unknown};
		static constexpr std::string name {""};
	};
	struct unknown; // unknown module
	struct keyboard; // keyboard
	// planned modules:
	/*
	struct usb; // usb ports
	struct audio; // audio I/O and processing
	struct probe; // multimeter probes and other similar devices
	struct rpi; // raspberry pi
	struct oscilloscope; // oscilloscope (returns processed data to save bandwidth over probe)
	struct touch; // touch pads and screens
	struct analog; // analog inputs, e.g. physical knobs and sliders
	struct fpga; // :)
	*/
};