#include <iostream>

#pragma once
class BitArray {

public:
	BitArray() = delete;											    //bcs arg ctor serves its purpose
	BitArray(const char value);					
	BitArray(const BitArray&);										    //copy constructor
	BitArray& operator=(const BitArray&);								//copy assignment operator

	BitArray& operator&(const BitArray&);								//bit-wise and operator
	friend std::ostream& operator<<(std::ostream&, const BitArray&);	//ostream operator
	friend BitArray& operator>>(std::istream&, BitArray&);				//istream operator

	const char& get_value(void) const;	
	BitArray& set_value(const char);
	bool get_bit(const char);
	BitArray& set_bit(const char, const bool);

private:
	char _value;
};