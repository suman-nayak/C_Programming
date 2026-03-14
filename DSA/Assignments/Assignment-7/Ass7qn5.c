/*Write a menu-driven program to perform the PUSH, POP, and Traverse operations on a stack
implemented using a Linked list.*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node *n;
};

struct node *top = NULL;

void push()
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d",&p->d);

    p->n = top;
    top = p;
}

void pop()
{
    struct node *t;

    if(top==NULL)
        printf("Stack Underflow\n");
    else
    {
        t = top;
        printf("Deleted: %d\n",t->d);
        top = top->n;
        free(t);
    }
}

void show()
{
    struct node *p = top;

    if(p==NULL)
        printf("Stack Empty\n");
    else
    {
        while(p!=NULL)
        {
            printf("%d\n",p->d);
            p = p->n;
        }
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
