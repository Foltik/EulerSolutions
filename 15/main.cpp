#include <cstdio>
int main() {
	long total = 1;
	// bincoeff n = 40, k = 20
	for (int i = 0; i < 20; i++) {
		total *= 40 - i;
		total /= i + 1;
	}
	printf("%ld\n", total);
}
