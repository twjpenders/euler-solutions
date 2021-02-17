#include <stdio.h>

int main(int argc, char *argv[])
{
        int sum = 1000;
        int c = 1000;
        for (int a = 1; a < (c / 3); a++) {
                for (int b = a; b < (c / 2); b++) {
                        for (int c = b; c < sum; c++) {
                                if (a + b + c == sum) {
                                        if ((a * a) + (b * b) == (c * c)) {
						printf("%d\n", a * b * c);
					}
                                }
                        }
                }
        }
        return 0;
}
