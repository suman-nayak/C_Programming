#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main ()
{
    int n, val;
    struct node *head = NULL;
    struct node *newnode, *temp;

    printf("Enter no.of node: ");
    scanf("%d", &n);
    head = (struct node *)malloc(sizeof(struct node));

    for (int i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter The data: ");
        scanf("%d", &val);

        newnode -> data = val;
        newnode -> next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else{
            while(temp->next != NULL)
                temp = temp->next;
            
        }
    }
    
}
