#include <cstdio>
#include <cmath>
int main() {
	int max = 2000000;
	long sum = 5;
	for (int i = 2; i < max; i++) {
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) break;
			else if (j + 1 > sqrt(i)) {
				sum += i;
			}
		}
	}
	printf("%ld\n", sum);
}
