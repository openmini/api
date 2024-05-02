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
#include "device.hpp"
#include <vector>

struct openmini::storage::gpt {
	device *underlying;
	struct partition {
		uint64_t type_l;
		uint64_t type_h;
		uint64_t id_l;
		uint64_t id_h;
		std::string label;
		device underlying;
	};
	std::vector<partition> partitions;
};