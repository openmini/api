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
#include "../sha.hpp"
#include <array>
#include <cstdint>
#include <vector>
struct openmini::security::sha::sha3_common {
	static void update(std::array<uint8_t,200> &state, const int position, const std::vector<uint8_t> block);
	static void permute(std::array<uint8_t,200> &state);
	static void extract(std::array<uint8_t,200> &state, std::vector<uint8_t> &out, const int size);
	static void extractBlock(std::array<uint8_t,200> &state, std::vector<uint8_t> &out);
	static void truncate(std::vector<uint8_t> &buf, const int size);
};