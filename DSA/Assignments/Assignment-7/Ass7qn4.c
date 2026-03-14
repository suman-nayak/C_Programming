#include <stdio.h>
#include <string.h>

char st[100];
int top = -1;

void push(char x)
{
    st[++top] = x;
}

void pop()
{
    top--;
}

int main()
{
    char e[100];
    int i,ok=1;

    printf("Enter expression: ");
    gets(e);

    for(i=0;e[i]!='\0';i++)
    {
        if(e[i]=='(' || e[i]=='{' || e[i]=='[')
            push(e[i]);
        else if(e[i]==')' || e[i]=='}' || e[i]==']')
        {
            if(top==-1)
            {
                ok=0;
                break;
            }
            pop();
        }
    }

    if(top!=-1) ok=0;

    if(ok==1) printf("Valid Expression");
    else printf("Invalid Expression");
}
