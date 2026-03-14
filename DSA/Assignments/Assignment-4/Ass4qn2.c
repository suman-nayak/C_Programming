#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff;
    int power;
    struct node *next;
};

struct node *head = NULL;

void create_poly();
void display_poly();

int main() {
    int ch;
    while(1) {
        printf("\n===== POLYNOMIAL USING LINKED LIST =====\n");
        printf("1. Create Polynomial\n");
        printf("2. Display Polynomial\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: create_poly(); break;
            case 2: display_poly(); break;
            case 0: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}

void create_poly() {
    int n, i;
    struct node *newnode, *temp;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter coefficient: ");
        scanf("%d", &newnode->coeff);

        printf("Enter power: ");
        scanf("%d", &newnode->power);

        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
        } else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}
void display_poly() {
    struct node *temp = head;

    if(head == NULL) {
        printf("Polynomial is empty!\n");
        return;
    }

    printf("Polynomial: ");
    while(temp != NULL) {
        if(temp->power == 0)
            printf("%d", temp->coeff);
        else if(temp->power == 1)
            printf("%dx", temp->coeff);
        else
            printf("%dx^%d", temp->coeff, temp->power);

        if(temp->next != NULL)
            printf(" + ");

        temp = temp->next;
    }
    printf("\n");
}
