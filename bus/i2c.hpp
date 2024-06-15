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
#include "../bus.hpp"
#include <cstdint>
struct openmini::bus::i2c {
	struct device {
		i2c *underlying;
		uint8_t addr;
		int write(void *buf, int length);
		int read(void *buf, int length);
	};
	struct device10 {
		i2c *underlying;
		uint16_t addr;
		int write(void *buf, int length);
		int read(void *buf, int length);
	};
	pin &scl, &sda; // references to pins
	i2c(pin &scl, pin &sda); // throws on error (e.g. i2c not available for pins)
	virtual int write(uint8_t addr, void *buf, int length); // writes to 7-bit target, returns number of bytes written, throws on error
	virtual int read(uint8_t addr, void *buf, int length); // reads from 7-bit target, returns number of bytes read, throws on error
	virtual int write10(uint16_t addr, void *buf, int length); // writes to 10-bit target, returns number of bytes written, throws on error
	virtual int read10(uint16_t addr, void *buf, int length); // reads from 10-bit target, returns number of bytes read, throws on error
};