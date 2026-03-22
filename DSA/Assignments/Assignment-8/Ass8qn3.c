/*Write a menu-driven program to perform the Enqueue, Dequeue, Size and Traverse
operations on a Circular Queue implemented using an array.*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int cq[MAX];
int front = -1, rear = -1;

int isFull() {
    return (front == (rear + 1) % MAX);
}

int isEmpty() {
    return (front == -1);
}

void enqueue() {
    if(isFull()) {
        printf("Queue Overflow\n");
        return;
    }
    int val;
    printf("Enter value: ");
    scanf("%d", &val);
    if(isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    cq[rear] = val;
}

void dequeue() {
    if(isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted: %d\n", cq[front]);
    if(front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void size() {
    if(isEmpty()) {
        printf("Size: 0\n");
    } else if(rear >= front) {
        printf("Size: %d\n", rear - front + 1);
    } else {
        printf("Size: %d\n", MAX - front + rear + 1);
    }
}

void traverse() {
    if(isEmpty()) {
        printf("Queue Empty\n");
        return;
    }
    int i = front;
    while(1) {
        printf("%d ", cq[i]);
        if(i == rear)
		break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Size\n4. Traverse\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
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
