#include <stdio.h>

void XSTRCPY(char dest[], char src[]) {
    int i;
    for(i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter source string: ");
    gets(str1);

    XSTRCPY(str2, str1);

    printf("Copied string: %s", str2);
    return 0;
}
