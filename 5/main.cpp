#include <cstdio>
bool divisible(int x) {
	for (int i = 1; i <= 20; i++) {
		if (x % i != 0) return false;
	}
	return true;
}
int main() {
	for (long i = 1; i < 1000000000; i++) {
		if (divisible(i)) {
			printf("%ld\n", i);
			return 0;
		}
	}
}
