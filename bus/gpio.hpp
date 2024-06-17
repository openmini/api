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
#include "../bus.hpp"
#include "./pin.hpp"
#include <algorithm>
#include <vector>
struct openmini::bus::gpio {
	struct analog {
		struct ref {
			ref &operator=(float);
			ref &operator=(ref);
			explicit operator float();
			friend bool operator==(ref,float);
			friend bool operator<(ref,float);
			friend bool operator>(ref,float);
			friend bool operator<=(ref,float);
			friend bool operator>=(ref,float);
			friend bool operator==(float,ref);
			friend bool operator<(float,ref);
			friend bool operator>(float,ref);
			friend bool operator<=(float,ref);
			friend bool operator>=(float,ref);
			friend bool operator==(ref,ref);
			friend bool operator<(ref,ref);
			friend bool operator>(ref,ref);
			friend bool operator<=(ref,ref);
			friend bool operator>=(ref,ref);
		private:
			pin::analog &underlying;
			ref(pin::analog&);
			friend analog;
		};
		struct iterator {
			// CopyConstructible:
			iterator(iterator&);
			iterator(iterator&&);
			// MoveAssignable:
			iterator &operator=(iterator&&);
			// CopyAssignable:
			iterator &operator=(iterator);
			// Destructible:
			~iterator();
			// Swappable:
			friend void swap(iterator&,iterator&);
			// LegacyIterator:
			using value_type = ref;
			using difference_type = int;
			using reference = ref&;
			using pointer = ref*;
			using iterator_category = std::random_access_iterator_tag;
			ref &operator*();
			iterator &operator++();
			inline iterator operator++(int) {
				auto tmp = *this;
				++*this;
				return tmp;
			}
			// EqualityComparable & Multipass guarantee & Singular iterators:
			inline friend bool operator==(iterator a, iterator b) {
				if (std::clamp(a.index,0,a.underlying->size())!=a.index) return (std::clamp(b.index,0,b.underlying->size())!=b.index);
				return std::addressof(a.underlying->operator[](a.index))==std::addressof(b.underlying->operator[](a.index));
			};
			// LegacyInputIterator:
			inline friend bool operator!=(iterator a, iterator b) {return !(a==b);}
			inline ref *operator->() {return &(**this);}
			// LegacyOutputIterator: already satisfied
			// DefaultConstructible:
			iterator();
			// LegacyForwardIterator: already satisfied
			// LegacyBidirectionalIterator:
			iterator &operator--();
			inline iterator operator--(int) {
				auto tmp = *this;
				--*this;
				return tmp;
			}
			// LegacyRandomAccessIterator:
			iterator &operator+=(int);
			friend iterator operator+(iterator,int);
			friend iterator operator+(int,iterator);
			inline iterator &operator-=(int n) {
				return *this+=-n;
			}
			friend iterator operator-(iterator,int);
			int operator-(iterator);
			ref &operator[](int);
			inline friend bool operator<(iterator a, iterator b) {return (b-a)>0;}
			inline friend bool operator>(iterator a, iterator b) {return b<a;}
			inline friend bool operator>=(iterator a, iterator b) {return !(a<b);}
			inline friend bool operator<=(iterator a, iterator b) {return !(a>b);}
		private:
			gpio *underlying;
			int index;
		};
		struct reverse_iterator : iterator {};
		ref &operator[](int);
		int size();
		template<class ...T> analog(T&...x) requires (std::derived_from<T,pin> && ...) : analog(std::initializer_list<pin::analog*const>({&x...})) {};
		iterator begin();
		iterator end();
		reverse_iterator rbegin();
		reverse_iterator rend();
	private:
		std::vector<ref> pins;
		analog(std::initializer_list<pin::analog*const> x);
	};
	struct ref {
		ref &operator=(bool);
		ref &operator=(ref);
		explicit operator bool();
		friend bool operator==(ref,bool);
		friend bool operator<(ref,bool);
		friend bool operator>(ref,bool);
		friend bool operator<=(ref,bool);
		friend bool operator>=(ref,bool);
		friend bool operator==(bool,ref);
		friend bool operator<(bool,ref);
		friend bool operator>(bool,ref);
		friend bool operator<=(bool,ref);
		friend bool operator>=(bool,ref);
		friend bool operator==(ref,ref);
		friend bool operator<(ref,ref);
		friend bool operator>(ref,ref);
		friend bool operator<=(ref,ref);
		friend bool operator>=(ref,ref);
	private:
		pin &underlying;
		ref(pin &underlying);
		friend gpio;
	};
	struct iterator {
		// CopyConstructible:
		iterator(iterator&);
		iterator(iterator&&);
		// MoveAssignable:
		iterator &operator=(iterator&&);
		// CopyAssignable:
		iterator &operator=(iterator);
		// Destructible:
		~iterator();
		// Swappable:
		friend void swap(iterator&,iterator&);
		// LegacyIterator:
		using value_type = ref;
		using difference_type = int;
		using reference = ref&;
		using pointer = ref*;
		using iterator_category = std::random_access_iterator_tag;
		ref &operator*();
		iterator &operator++();
		inline iterator operator++(int) {
			auto tmp = *this;
			++*this;
			return tmp;
		}
		// EqualityComparable & Multipass guarantee & Singular iterators:
		inline friend bool operator==(iterator a, iterator b) {
			if (std::clamp(a.index,0,a.underlying->size())!=a.index) return (std::clamp(b.index,0,b.underlying->size())!=b.index);
			return std::addressof(a.underlying->operator[](a.index))==std::addressof(b.underlying->operator[](a.index));
		};
		// LegacyInputIterator:
		inline friend bool operator!=(iterator a, iterator b) {return !(a==b);}
		inline ref *operator->() {return &(**this);}
		// LegacyOutputIterator: already satisfied
		// DefaultConstructible:
		iterator();
		// LegacyForwardIterator: already satisfied
		// LegacyBidirectionalIterator:
		iterator &operator--();
		inline iterator operator--(int) {
			auto tmp = *this;
			--*this;
			return tmp;
		}
		// LegacyRandomAccessIterator:
		iterator &operator+=(int);
		friend iterator operator+(iterator,int);
		friend iterator operator+(int,iterator);
		inline iterator &operator-=(int n) {
			return *this+=-n;
		}
		friend iterator operator-(iterator,int);
		int operator-(iterator);
		ref &operator[](int);
		inline friend bool operator<(iterator a, iterator b) {return (b-a)>0;}
		inline friend bool operator>(iterator a, iterator b) {return b<a;}
		inline friend bool operator>=(iterator a, iterator b) {return !(a<b);}
		inline friend bool operator<=(iterator a, iterator b) {return !(a>b);}
	private:
		gpio *underlying;
		int index;
	};
	struct reverse_iterator : iterator {};
	ref &operator[](int);
	int size();
	template<class ...T> gpio(T&...x) requires (std::derived_from<T,pin> && ...) : gpio(std::initializer_list<pin*const>({&x...})) {};
	iterator begin();
	iterator end();
	iterator rbegin();
	iterator rend();
private:
	std::vector<ref> pins;
	gpio(std::initializer_list<pin*const> x);
};