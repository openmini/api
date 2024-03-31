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

// keyboard module
#pragma once
#include "../modules.hpp"
#include <bitset>
struct openmini::modules::keyboard {
	enum key {
		left_ctrl,
		right_ctrl,
		left_alt,
		right_alt,
		left_shift,
		right_shift,
		left_super,
		right_super,
		backspace,
		tab,
		enter,
		caps_lock,
		page_up,
		page_down,
		fn,
		f1,
		f2,
		f3,
		f4,
		f5,
		f6,
		f7,
		f8,
		f9,
		f10,
		f11,
		f12,
		escape,
		insert,
		del, // can't name this key "delete" since it's an operator
		home,
		end,
		space,
		exclamation_mark,
		quotation_mark,
		number_sign,
		dollar_sign,
		percent_sign,
		ampersand,
		apostrophe,
		left_parenthesis,
		right_parenthesis,
		asterisk,
		plus_sign,
		comma,
		hyphen_minus,
		full_stop,
		solidus,
		digit_zero,
		digit_one,
		digit_two,
		digit_three,
		digit_four,
		digit_five,
		digit_six,
		digit_seven,
		digit_eight,
		digit_nine,
		colon,
		semicolon,
		less_than_sign,
		equals_sign,
		greater_than_sign,
		question_mark,
		at_sign,
		a,
		b,
		c,
		d,
		e,
		f,
		g,
		h,
		i,
		j,
		k,
		l,
		m,
		n,
		o,
		p,
		q,
		r,
		s,
		t,
		u,
		v,
		w,
		x,
		y,
		z,
		left_bracket,
		backslash,
		right_bracket,
		caret,
		underline,
		backtick,
		lowercase_a,
		lowercase_b,
		lowercase_c,
		lowercase_d,
		lowercase_e,
		lowercase_f,
		lowercase_g,
		lowercase_h,
		lowercase_i,
		lowercase_j,
		lowercase_k,
		lowercase_l,
		lowercase_m,
		lowercase_n,
		lowercase_o,
		lowercase_p,
		lowercase_q,
		lowercase_r,
		lowercase_s,
		lowercase_t,
		lowercase_u,
		lowercase_v,
		lowercase_w,
		lowercase_x,
		lowercase_y,
		lowercase_z,
		left_brace,
		vertical_bar,
		right_brace,
		tilde,
		arrow_up,
		arrow_down,
		arrow_left,
		arrow_right,
		print_screen,
		scroll_lock,
		pause,
		keypad_zero,
		keypad_one,
		keypad_two,
		keypad_three,
		keypad_four,
		keypad_five,
		keypad_six,
		keypad_seven,
		keypad_eight,
		keypad_nine,
		keypad_decimal_point,
		num_lock,
		keypad_solidus,
		keypad_asterisk,
		keypad_minus,
		keypad_plus,
		keypad_enter,
		custom_0,
		custom_1,
		custom_2,
		custom_3,
		custom_4,
		custom_5,
		custom_6,
		custom_7,
		custom_8,
		custom_9,
		custom_10,
		custom_11,
		custom_12,
		custom_13,
		custom_14,
		custom_15,
		custom_16,
		custom_17,
		custom_18,
		custom_19,
		custom_20,
		custom_21,
		custom_22,
		custom_23,
		custom_24,
		custom_25,
		custom_26,
		custom_27,
		custom_28,
		custom_29,
		custom_30,
		custom_31,
		custom_32,
		custom_33,
		custom_34,
		custom_35,
		custom_36,
		custom_37,
		custom_38,
		custom_39,
		custom_40,
		custom_41,
		custom_42,
		custom_43,
		custom_44,
		custom_45,
		custom_46,
		custom_47,
		custom_48,
		custom_49,
		custom_50,
		custom_51,
		custom_52,
		custom_53,
		custom_54,
		custom_55,
		custom_56,
		custom_57,
		custom_58,
		custom_59,
		custom_60,
		custom_61,
		custom_62,
		custom_63,
		custom_64,
		custom_65,
		custom_66,
		custom_67,
		custom_68,
		custom_69,
		custom_70,
		custom_71,
		custom_72,
		custom_73,
		custom_74,
		custom_75,
		custom_76,
		custom_77,
		custom_78,
		custom_79,
		custom_80,
		custom_81,
		custom_82,
		custom_83,
		custom_84,
		custom_85,
		custom_86,
		custom_87,
		custom_88,
		custom_89,
		custom_90,
		custom_91,
		custom_92,
		custom_93,
		custom_94,
		custom_95,
		custom_96,
		custom_97,
		custom_98,
		custom_99,
		custom_100,
		custom_101,
		custom_102,
		custom_103,
		custom_104
	};
	bool poll(); // should return true if any buttons have been pressed or released
	std::bitset<256> active;
	std::bitset<256> changes;
};