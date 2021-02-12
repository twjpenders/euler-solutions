#include <stdio.h>

int is_div(long int number)
{
	for (int i = 1; i <= 20; i++) {
		if (number % i != 0) return 0;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	long int answer;
	for (answer = 1; answer != 0; answer++) {
		if (is_div(answer)) break;
		else continue;
	}
	printf("%lu\n", answer);
	return 0;
}
