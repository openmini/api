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
#include "../storage.hpp"
#include "./device.hpp"
#include <cstdint>
struct openmini::storage::file : openmini::storage::device {
	enum mode {
		R = 1,
		W = 2,
		RW = 3
	};
	const mode m = mode(0);
	virtual void read(uint64_t pos, uint8_t *buf, uint32_t size);
	virtual void write(uint64_t pos, uint8_t *buf, uint32_t size);
	virtual void close();
};