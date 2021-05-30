#include <iostream>
#include "BitArray.h"

int main() {
	BitArray array('A');
	std::cout << array << std::endl;
	bool res = array.get_bit(4);
	std::cout << res << std::endl;
	return 0;
}