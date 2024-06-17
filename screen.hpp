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
struct openmini::screen {
	static screen& builtin;
	std::string identity; // identity of the screen
	uint16_t width; // the display's width
	uint16_t height; // the display's height
	bool canSync; // whether the display is capable of v-sync
	class console; // a low-level console used for debugging and early init logs
	screen();
	virtual void draw(uint16_t *buf, uint16_t x, uint16_t y, uint8_t width, uint8_t height);
	virtual void sync();
	virtual void setSync(bool enabled);
};