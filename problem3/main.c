#include <stdio.h>
#include <math.h>

#define PRIME 1
#define NONPRIME 0

int is_prime(long long int number)
{
	for (int i = 2; i < sqrt(number); i++) {
		if (number % i == 0) return NONPRIME;
	}
	return PRIME;
}

int main(int argc, char *argv[])
{
	
	return 0;
}
