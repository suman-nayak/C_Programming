#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, flag = 0;
    printf("Enter a string: ");
    gets(str);   // for simple lab programs; in practice, use fgets
    len = strlen(str);
    // Compare characters from start and end
    for (i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            flag = 1;      // not palindrome
            break;
        }
}
    if (flag == 0)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
}
