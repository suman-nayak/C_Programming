//WAP to convert a binary number to decimal number system.
#include <stdio.h>
#include <math.h>
int main() 
{
    int bin, dec = 0, rem, i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &bin);
    while (bin != 0)
    {
        rem = bin % 10;
        dec = dec + (rem * pow(2,i));
        bin = bin / 10;
        i++;
    }
    printf("\nDecimal equivalent: %d", dec);
    return 0;
}