#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char c)
{
    if(top >= MAX_SIZE - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack[top] = c;
}

char pop()
{
    if(top < 0)
    {
        printf("Stack Underflow!\n");
        return '\0';
    }
    return stack[top--];
}

int main()
{
    char str[MAX_SIZE];
    char reversed[MAX_SIZE];
    int i, len;
    
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = '\0';
    
    len = strlen(str);
    
    for(i = 0; i < len; i++)
    {
        push(str[i]);
    }
    
    i = 0;
    while(top >= 0)
    {
        reversed[i] = pop();
        i++;
    }
    reversed[len] = '\0';
    
    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed);
    
    return 0;
}
