#include <iostream>
#include <fstream>
#include <string>
#include "ttmath/ttmath.h"
int main() {
	std::string nums[100];
		
	std::fstream file("numbers.dat", std::ios_base::in);
	for (int i = 0; i < 100; i++) {
		file >> nums[i];
	}

	ttmath::UInt<4> sum = "0";
	for (std::string i : nums) {
		ttmath::UInt<4> num = i;
		sum += i;
	}
	std::cout << sum << std::endl;
}			
