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
#include <bitset>
struct openmini::input {
	enum button {
		ctrl,
		alt,
		shift,
		ok,
		up,
		down,
		left,
		right,
		back,
		home,
		menu,
		quit,
		f1,
		f2,
		f3
	};
	virtual bool poll(); // poll button states. returns true if any changes occurred.
	std::bitset<16> active; // whether a button is active
	std::bitset<16> changed; // whether a button's state changed in the last poll
};