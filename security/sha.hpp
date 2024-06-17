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
#include "../security.hpp"
struct openmini::security::sha {
	struct sha2_224;
	struct sha2_256;
	struct sha2_384;
	struct sha2_512;
	struct sha3_224;
	struct sha3_256;
	struct sha3_384;
	struct sha3_512;
	struct sha3_shake128;
	struct sha3_shake256;
	struct sha3_common;
};