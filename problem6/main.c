#include <stdio.h>

long int sum_squared(void)
{
	long int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	return sum * sum;
}

long int sum_of_squares(void)
{
        long int sum = 0;
        for (int i = 1; i <= 100; i++) {
                sum += (i * i);
        }
        return sum;
}

int main(int argc, char *argv[])
{
	printf("%lu\n", sum_squared() - sum_of_squares());
	return 0;
}
