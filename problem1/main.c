/* Solves the problem by summing all multiples of 3 and 5 and then subtracting
 * all multiples of 15. The remainder is the sum of all multiples of 3 or 5 but
 * not both. This is called the inclusion-exclusion principle.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 3; i < 1000; i += 3) {
		sum += i;
	}

	for (int i = 5; i < 1000; i += 5) {
		sum += i;
	}

	for (int i = 15; i < 1000; i += 15) {
		sum -= i;
	}

	printf("%d\n", sum);
	return 0;
}
