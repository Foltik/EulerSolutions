#include <cstdio>
#include <cmath>
int main() {
	int max = 1000000;
	int target = 10001;
	int count = 2;
	for (int i = 2; i < max; i++) {
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) break;
			else if (j + 1 > sqrt(i)) {
				count++;
				if (count == target) {
					printf("%d\n", i);
					return 0;
				}
			}
		}
	}
}
