//Write a menu-driven program to perform the PUSH, POP, and Traverse operations on a stack implemented using an array.
#include <stdio.h>
#define n 5

int st[n], top = -1;

void push()
{
    int x;
    if(top == n-1)
        printf("Stack Overflow\n");
    else
    {
        printf("Enter value: ");
        scanf("%d",&x);
        top++;
        st[top] = x;
    }
}

void pop()
{
    if(top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Deleted: %d\n",st[top]);
        top--;
    }
}

void show()
{
    int i;
    if(top == -1)
        printf("Stack Empty\n");
    else
    {
        for(i=top;i>=0;i--)
            printf("%d\n",st[i]);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Traverse\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);

        if(ch==1) push();
        else if(ch==2) pop();
        else if(ch==3) show();
        else if(ch==4) break;
        else printf("Wrong Choice\n");
    }
}
