#include <cstdio>
#include <cmath>
int main() {
	int squareOfSum = 0;
	int sumOfSquares = 0;
	
	for (int i = 1; i <= 100; i++) {
		sumOfSquares += i * i;
		squareOfSum += i;
	}
	squareOfSum *= squareOfSum;
	printf("%d\n", squareOfSum - sumOfSquares);
}
