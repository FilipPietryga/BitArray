#include <iostream>
#include "BitArray.h"

BitArray::BitArray(const char value = 0) 
	: _value(value)
{	}

BitArray::BitArray(const BitArray& src) 
	: _value(src._value)
{	}

BitArray& BitArray::operator=(const BitArray& src) {
	if (&src == this) 
		return *this;
	_value = src._value;
}

std::ostream& operator<<(std::ostream& out, const BitArray& arr) {
	char temp = arr._value;
	for (int i = 0; i < 8; i++) {
		out << !!((temp << i) & 0x80);
	}
	return out;
}

BitArray& operator>>(std::istream& ins, BitArray& arr) {
	char val;
	ins >> val;
	arr._value = val;
	return arr;
}

const char& BitArray::get_value(void) const {
	return _value;
}

BitArray& BitArray::set_value(const char val) {
	_value = val;
	return *this;
}

bool BitArray::get_bit(const char bit) {
	const char read_mask = ((1 << 8) - 1) << (bit - 1);
	_value &= read_mask;
	return true;
}

BitArray& BitArray::set_bit(const char bit, const bool val) {

	return *this;
}