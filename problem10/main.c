#include <stdio.h>
#include <math.h>

int is_prime(int number)
{
	int max = ceil(sqrt(number));
	if (number == 1) return 0;
	else if (number == 2) return 1;
	else {
		for (int i = 2; i <= max; i++) {
			if (number % i == 0) return 0;
		}
		return 1;
	}
}

int main(int argc, char *argv[])
{
	long long int sum = 0;
	for (int i = 1; i < 2000000; i++) {
		if (is_prime(i)) {
			sum += i;
		} else continue;
	}
	printf("%llu\n", sum);
	return 0;
}
