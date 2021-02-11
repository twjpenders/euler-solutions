/* We have to check every product from 100x100 up to 999x999 if it is a
 * palindrome. If it is we compare it to the previous palindrome to see
 * if it is larger. If it is then this is our new candidate answer.
 */

#include <stdio.h>

#define PALINDROME 1
#define NOTPALINDROME 0

int reverse_int(int number)
{

}

int is_palindrome(int number)
{
	if (number == reverse_int(number)) return PALINDROME;
	else return NOTPALINDROME;
}

int main(int argc, char *argv[])
{
	int answer = 0;
	for (int a = 100; a < 1000; a++) {
		for (int b = 100; b < 1000; b++) {
			if (is_palindrome(a*b) && a*b > answer) {
				answer = a*b;
			} else continue;
		}
	}

	printf("%d\n", answer);
    	return 0;
}
