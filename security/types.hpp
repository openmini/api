#pragma once
#include "../security.hpp"
struct openmini::security::types {
	template<int N>
	using hash = std::array<uint8_t,N>(uint8_t *msg, size_t size);
	template<int ON, int KN>
	using hmac = std::array<uint8_t,ON>(std::array<uint8_t,KN> key, uint8_t *msg, size_t size);
	template<int ON>
	using hmac_vlk = std::array<uint8_t,ON>(uint8_t *key, size_t ksize, uint8_t *msg, size_t msize);
};