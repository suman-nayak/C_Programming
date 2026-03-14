#include <stdio.h>

int XSTRCMP(char s1[], char s2[]) {
    int i = 0;

    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;  
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    int result = XSTRCMP(str1, str2);

    if(result == 0)
        printf("Strings are equal");
    else if(result > 0)
        printf("First string is greater");
    else
        printf("Second string is greater");

    return 0;
}
