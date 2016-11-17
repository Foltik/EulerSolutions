#include <iostream>
#include <cmath>
int main() {
		long x = 600851475143;
		while (x % 2 == 0) {
				printf("%d ", 2);
				x /= 2;
		}
		
		for (int i = 3; i < sqrt(x); i += 2) {
			while (x % i == 0) {
					printf("%d ", i);
					x /= i;
			}
		}
		if (x > 2) printf("%d ", x);
}
