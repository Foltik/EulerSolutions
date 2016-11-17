#include <iostream>
int main() {
	int sum = 0;
	int first = 0;
	int second = 1;
	int next = 0;
	for (int i = 2; i < 4000000; i++) {
		next = first + second;
	       	first = second;
		second = next;
		i = next;
		if (i % 2 == 0) sum += i;

	}
	printf("%d\n", sum);
}
