#include <stdio.h>
int main() {
    char str[100];
    int n, len = 0, i;

    printf("Enter string: ");
    gets(str);

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 0; str[i] != '\0'; i++)
        len++;

    printf("Last %d characters: ", n);
    for(i = len - n; i < len; i++)
        printf("%c", str[i]);

    return 0;
}
