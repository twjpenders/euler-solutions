#include <stdio.h>

void readnumber(int number[1000])
{
        FILE *fptr;
        fptr = fopen("./NUMBER", "r");
        char ch;
        int i = 0;
        while ((ch = fgetc(fptr)) != EOF) {
                number[i] = ch - '0';
                i++;
        }
        fclose(fptr);
}

int main(int argc, char *argv[])
{
        int number[1000];
        readnumber(number);
        int length = 1000;
        int productlength = 13;
        long int max = 0;

        for (int i = 0; i < length - 1; i++) {
                long int product = 1;
                for (int a = 0; a < productlength; a++) {
                        product = product * number[i + a];
                }
                if (product > max) max = product;
        }
        printf("%lu\n", max);
        return 0;
}
