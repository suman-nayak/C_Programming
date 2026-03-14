// Program to check whether a character is uppercase or lowercase
#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("The character '%c' is an uppercase letter.\n", ch+32);
    else if (ch >= 'a' && ch <= 'z')
        printf("The character '%c' is a lowercase letter.\n", ch-32);
    else
        printf("The character '%c' is not an alphabet letter.\n", ch);
}