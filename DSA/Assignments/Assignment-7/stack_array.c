#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push()
{
    int value;
    if(top >= MAX_SIZE - 1)
    {
        printf("Stack Overflow! Cannot push element.\n");
        return;
    }
    printf("Enter the value to push: ");
    scanf("%d", &value);
    top++;
    stack[top] = value;
    printf("Element %d pushed to stack.\n", value);
}

void pop()
{
    if(top < 0)
    {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }
    printf("Element %d popped from stack.\n", stack[top]);
    top--;
}

void traverse()
{
    int i;
    if(top < 0)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements are: ");
    for(i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice;
    
    while(1)
    {
        printf("\n--- Stack Menu ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
