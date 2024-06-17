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
#include "./main.hpp"
#include "./modules/keyboard.hpp"
#include "./modules/protocol.hpp"
#include "./bus/gpio.hpp"
struct openmini::builtin {
	static screen &screen;
	static struct modules::keyboard &keyboard;
	static modules::protocol &module_bus;
	static bus::uart &debug;
	struct gpio {
		static bus::gpio &digital;
		static bus::gpio::analog &analog;
	};
	
};