#include <stdio.h>

void XSTRCAT(char s1[], char s2[]) {
    int i = 0, j = 0;

    while(s1[i] != '\0')
        i++;

    while(s2[j] != '\0') {
        s1[i] = s2[j];
        i++; j++;
    }
    s1[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    XSTRCAT(str1, str2);

    printf("Concatenated string: %s", str1);
    return 0;
}
