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
#include "../screen.hpp"
struct openmini::screen::console {
	screen &scr;
	uint8_t chr_width;
	uint8_t chr_height;
	uint8_t pos_x;
	uint8_t pos_y;
	console(screen&); // initializes console
	~console(); // destroys console resources
	void print(const std::string); // prints text to the console
	void putc(const uint8_t, uint8_t x, uint8_t y); // writes a character at a given position
	void pause(); // pauses console activity to allow other drawing to occur
	void resume(); // resumes console activity
};
