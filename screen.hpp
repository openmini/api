#pragma once
#include "main.hpp"
struct openmini::screen {
	std::string identity; // identity of the screen
	uint16_t width; // the display's width
	uint16_t height; // the display's height
	bool canSync; // whether the display is capable of v-sync
	class console; // a low-level console used for debugging and early init logs
	screen();
	void draw(uint16_t *buf, uint16_t x, uint16_t y, uint8_t width, uint8_t height);
	void sync();
	void setSync(bool enabled);
};