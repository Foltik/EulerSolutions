#include <cstdio>
int main() {
	for (int i = 0; i < 1000000; i++) {
		int tri = 0;
		int fcount = 0;
		for (int j = 1; j <= i; j++) tri += j;
		for (int j = 1; j <= tri; j++) if (tri % j == 0) fcount++;
		if (fcount > 500) {
			printf("%d\n", tri);
			return 0;
		}
	}
}
