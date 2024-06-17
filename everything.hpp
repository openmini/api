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

// You probably don't want to use this file. This is mainly for API implementations.
#pragma once
#include "main.hpp"
#include "bus/gpio.hpp"
#include "bus/i2c.hpp"
#include "bus/pin.hpp"
#include "bus/uart.hpp"
#include "modules/keyboard.hpp"
#include "modules/protocol.hpp"
#include "networking/bluetooth.hpp"
#include "networking/device.hpp"
#include "networking/wifi.hpp"
#include "screen/console.hpp"
#include "security/sha2/224.hpp"
#include "security/sha2/256.hpp"
#include "security/sha2/384.hpp"
#include "security/sha2/512.hpp"
#include "security/sha3/224.hpp"
#include "security/sha3/256.hpp"
#include "security/sha3/384.hpp"
#include "security/sha3/512.hpp"
#include "security/aes.hpp"
#include "security/sha.hpp"
#include "security/types.hpp"
#include "storage/device.hpp"
#include "storage/fat32.hpp"
#include "storage/file.hpp"
#include "storage/filesystem.hpp"
#include "storage/gpt.hpp"
#include "storage/mbr.hpp"
#include "builtin.hpp"
#include "bus.hpp"
#include "input.hpp"
#include "modules.hpp"
#include "networking.hpp"
#include "screen.hpp"
#include "security.hpp"
#include "storage.hpp"