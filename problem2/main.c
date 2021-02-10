/* This program finds the solution by first defining a function that calculates term
 * n of the Fibonacci sequence and then looping over every possible n and summing
 * every fibonacci(n) where fibonacci(n) is less than 4 million and evenly divisible
 * by 2.
 */

#include <stdio.h>

int fibonacci(unsigned int term)
{
	if (term == 0) return 0;
	else if (term == 1) return 1;
	else {
		return fibonacci(term - 1) + fibonacci(term - 2);
	}
}

int main(int argc, char *argv[])
{
	unsigned long sum = 0;
	for (int i = 0; fibonacci(i) < 4000000; i++) {
		if (fibonacci(i) % 2 == 0) {
			sum += fibonacci(i);
		} else {
			continue;
		}
	}

	printf("%lu\n", sum);
	return 0;
}
