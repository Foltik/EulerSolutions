#include <cstdio>
#include <fstream>
int main() {
	int largest = 0;
	int nums[20][20];
	std::fstream file("numbers.dat", std::ios_base::in);
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			file >> nums[i][j];
		}
	}
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 17; j++) {
			int product = nums[i][j] * nums[i][j + 1] * nums[i][j + 2] * nums[i][j + 3];
			if (product > largest) largest = product;
		}
	}
	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 20; j++) {
			int product = nums[i][j] * nums[i + 1][j] * nums[i + 2][j] * nums[i + 3][j];
			if (product > largest) largest = product;
		}
	}
	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 17; j++) {
			int product = nums[i][j] * nums[i + 1][j + 1] * nums[i + 2][j + 2] * nums[i + 3][j + 3];
			if (product > largest) largest = product;
		}
	}
	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 17; j++) {
			int product = nums[i + 3][j] * nums[i + 2][j + 1] * nums[i + 1][j + 2] * nums[i][j + 3];
			if (product > largest) largest = product;
		}
	}
	printf("%d\n", largest);
}
