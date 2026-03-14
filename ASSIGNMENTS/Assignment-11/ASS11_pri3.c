#include <stdio.h>

int main() 
{
    char str[100];
    int n, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter n: ");
    scanf("%d", &n);

    printf("First %d characters: ", n);
    for(i = 0; i < n && str[i] != '\0'; i++)
        printf("%c", str[i]);

    return 0;
}
