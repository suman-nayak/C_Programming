#include <stdio.h>

int XSTRLEN(char s[]) {
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);

    printf("Length = %d", XSTRLEN(str));
    return 0;
}
