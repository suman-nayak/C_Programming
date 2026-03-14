/*Write a menu-driven program to perform the Enqueue, Dequeue, Size and Traverse
operations on a Queue implemented using a Linked list.*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue() {
    struct node *p = (struct node*)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &p->data);
    p->next = NULL;
    if(rear == NULL) {
        front = rear = p;
    } else {
        rear->next = p;
        rear = p;
    }
}

void dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
    } else {
        struct node *t = front;
        printf("Deleted: %d\n", t->data);
        front = front->next;
        if(front == NULL) 
           rear = NULL;
        free(t);
    }
}

void size() {
    int count = 0;
    struct node *p = front;
    while(p != NULL) {
        count++;
        p = p->next;
    }
    printf("Size: %d\n", count);
}

void traverse() {
    if(front == NULL) {
        printf("Queue Empty\n");
    } else {
        struct node *p = front;
        while(p != NULL) {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("\n");
    }
}

int main() {
    int ch;
    while(1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Size\n4. Traverse\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: enqueue();
		    break;
            case 2: dequeue();
		    break;
            case 3: size();
		    break;
            case 4: traverse();
		    break;
            case 5: exit(0);
            default:
		    printf("Invalid choice\n");
        }
    }
    return 0;
}
