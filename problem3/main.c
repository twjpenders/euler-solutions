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
	long long int number = 600851475143;
	long long int divisor = 2;
	
	while (number != divisor) {
        if (is_prime(divisor)) {
            if (number % divisor == 0) {
                number = number / divisor;
            } else {
                divisor += 1;
            }
        } else {
            divisor += 1;
        }
    }
    
    printf("%llu\n", number);
    return 0;
}
