#include <stdio.h>
#include <ctype.h>

int st[100];
int top = -1;

void push(int x)
{
    st[++top] = x;
}
int pop()
{
    return st[top--];
}
int main()
{
    char p[100];
    int i=0,a,b,r;

    printf("Enter postfix: ");
    scanf("%s",p);

    while(p[i]!='\0')
    {
        if(isdigit(p[i]))
            push(p[i]-48);
        else
        {
            b = pop();
            a = pop();

            if(p[i]=='+') r = a+b;
            if(p[i]=='-') r = a-b;
            if(p[i]=='*') r = a*b;
            if(p[i]=='/') r = a/b;

            push(r);
        }
        i++;
    }
    printf("Result = %d",pop());
}