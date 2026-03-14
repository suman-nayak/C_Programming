//WAP to reverse any string using a stack.
#include <stdio.h>
#include <string.h>

char st[100];
int top = -1;

void push(char x)
{
    top++;
    st[top] = x;
}

char pop()
{
    return st[top--];
}

int main()
{
    char s[100];
    int i,l;

    printf("Enter string: ");
    gets(s);

    l = strlen(s);

    for(i=0;i<l;i++)
        push(s[i]);

    for(i=0;i<l;i++)
        s[i] = pop();

    printf("Reversed string: %s",s);
}