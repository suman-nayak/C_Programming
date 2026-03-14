#include <stdio.h>

int main() 
{
    char str[100];
    int pos, len, i;

    printf("Enter string: ");
    gets(str);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter length of substring: ");
    scanf("%d", &len);

    printf("Substring: ");
    for(i = pos; i < pos + len && str[i] != '\0'; i++)
        printf("%c", str[i]);

    return 0;
}