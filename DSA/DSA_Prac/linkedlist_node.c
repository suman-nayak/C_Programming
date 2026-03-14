#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void create ()
{
    int n, i, val;
    struct node *newnode, *temp;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &val);

        newnode->data = val;
        newnode->next = NULL;

        if (head == NULL){
            head = newnode;
        }else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}

void traverse()
{
    struct node *temp = head;
    if (head == NULL){
        printf("The List is Empty");
        return;
    }
    printf("Linked list: ");
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main ()
{
    int ch;
    while(1) {
        printf("\n====== SINGLE LINKED LIST MENU ======\n");
        printf("1. Create\n");
        printf("2. Traverse\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: create();
            break;
            case 2: traverse();
            break;
            case 0: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;

}