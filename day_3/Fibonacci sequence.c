#include <stdio.h>

int main(void)
{
	int fib[6];
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i < 6; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	printf("First six Fibonacci numbers:\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", fib[i]);
	}
	printf("\n");

	return 0;
}
