#include <cstdio>
#include <string>
#include "ttmath/ttmath.h"
int main() {
	int sum = 0;
	std::string res;
	ttmath::UInt<32> num = 2;
	num.Pow(1000);
	num.ToString(res);
	for (char i : res) sum += i - '0';
	std::cout << sum << std::endl;
}			
