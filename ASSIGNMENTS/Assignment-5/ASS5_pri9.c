//WAP to convert a decimal number to binary number system.
#include <stdio.h>
#include <math.h>
int main()
{
    int dec, rem, bin = 0, i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    while (dec != 0)
    {
        rem = dec % 2;
        bin = bin + (rem * pow(10, i));
        dec = dec / 2;
        i++;
    }
    printf("\n Binary equivalent: %d", bin);
    return 0;
}