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
#include <cstdint>
struct openmini::security::types {
	template<uint16_t s = 0>
	struct buffer {
		uint16_t size;
		uint8_t *body;
	};
	template<uint16_t s> requires (s>0)
	struct buffer<s> {
		static constexpr uint16_t size = s;
		uint8_t body[s];
	};
	template<int N>
	using hash = void(buffer<> msg, buffer<N> out); // hash-like functions
	template<int IN, int ON, int KN>
	using blockcipher = void(buffer<IN> msg, buffer<KN> key, buffer<ON> out); // block ciphers
	template<int KN>
	using cryptor = buffer<>(buffer<KN> key, buffer<> msg); // encryption, decryption, and other similar functions
	template<int ON, int KN>
	using keyedhash = void(buffer<KN> key, buffer<> msg, buffer<ON> out); // so-called "keyed hashes", like HMACs and other similar functions
	
};