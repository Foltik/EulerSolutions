#include <cstdio>
int main() {
	int largest = 0;
	int largestSteps = 0;

	for (int i = 2; i < 1000000; i++) {
		long current = i;
		int count = 0;
		while (current != 1) {
			if (current % 2 == 0) current /= 2;
			else current = current * 3 + 1;
			count++;
		}
		if (count > largestSteps) {
			largestSteps = count;
			largest = i;
		}
	}
	printf("%d\n", largest);
}
