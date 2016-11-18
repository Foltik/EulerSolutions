#include <cstdio>
#include <cmath>
int reverse(int x) {
	int rev = 0;
	while (x > 0) {
		rev = rev * 10 + (x % 10);
		x /= 10;
	}
	return rev;
}
int main() {
	int largest = 0;
	for (int i = 1; i < 1000; i++) {
		for (int j = 1; j < 1000; j++) {
			if (i * j > largest && reverse(i * j) == i * j) largest = i * j;
		}	
	}
	printf("%d\n", largest);
}
