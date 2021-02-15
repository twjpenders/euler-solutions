#include <stdio.h>
#include <math.h>

#define NONPRIME 0
#define PRIME 1

int is_prime(long long int number)
{
	if (number == 0) return NONPRIME;
	if (number == 1) return NONPRIME;
	if (number == 2) return PRIME;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) return NONPRIME;
	}
	return PRIME;
}

int main(int argc, char *argv[])
{
	int count = 0;
	long long int i;

	for (i = 0; count != 10001; i++) {
		if (is_prime(i)) {
			count++;
		} else continue;
	}
	printf("%llu\n", i - 1);
	return 0;
}
