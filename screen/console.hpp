#pragma once
#include "../screen.hpp"
struct openmini::screen::console {
	uint8_t chr_width;
	uint8_t chr_height;
	console();
	void print(const std::string); // prints text to the console
	void putc(const uint8_t, uint8_t x, uint8_t y); // writes a character at a given position
	uint8_t getX();
	uint8_t getY();
	void setX(uint8_t x);
	void setY(uint8_t y);
	void setXY(uint8_t x, uint8_t y);
};
