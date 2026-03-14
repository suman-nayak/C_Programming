#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    
    while(str[count] != '\0' && str[count] != '\n') {
        count++;  
    }
    printf("Number of characters in the string: %d\n", count);

    return 0;
}

