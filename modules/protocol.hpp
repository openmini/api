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

/*
not actually a module, this file defines the standard bus protocol for the expansion port and card slot
the module bus is based on uart (it uses a standard UART transciever for communication) but with some added wizardry to make it multidrop, hotpluggable, and half-duplex
essentially, since the idle state of uart is high, we can add a diode from RX to TX to create a single XFER wire @ the RX pin
this means that RX sees everything that's transmitted by any node's TX pin, and can check its output against its input
so, in total, we have 3 wires:
PWR, XFER, and GND

this affords us 800 Kbps of data, more than enough to stream 128Kbps MP3 audio
*/

#pragma once
#include "../modules.hpp"
#include "../bus/uart.hpp"
#include <list>
struct openmini::modules::protocol {
	static protocol bus;
	openmini::bus::uart *underlying;
	struct message {
		int addr;
		int dev;
		int size;
		uint8_t *buf;
	};
	std::list<message> incoming;
	virtual void send(message msg);
	virtual void poll();
};