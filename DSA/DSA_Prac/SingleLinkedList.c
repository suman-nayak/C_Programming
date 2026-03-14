#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void create() {
    int n, data, i;
    struct Node *newNode, *temp;
    printf("Enter number of nodes to create: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;
        if(head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

void display() {
    struct Node *temp = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("List elements: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insert_begin() {
    int data;
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to insert at beginning: ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insert_end() {
    int data;
    struct Node *newNode, *temp;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to insert at end: ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insert_loc() {
    int data, pos, i;
    struct Node *newNode, *temp;
    printf("Enter location to insert: ");
    scanf("%d", &pos);
    printf("Enter data: ");
    scanf("%d", &data);
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    temp = head;
    for(i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if(temp == NULL) {
        printf("Position out of range\n");
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void delete_begin() {
    struct Node *temp;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
    printf("First node deleted\n");
}

void delete_end() {
    struct Node *temp, *prev;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    if(head->next == NULL) {
        free(head);
        head = NULL;
        printf("Last node deleted\n");
        return;
    }
    temp = head;
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    printf("Last node deleted\n");
}

void delete_loc() {
    struct Node *temp, *prev;
    int pos, i;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Enter location to delete: ");
    scanf("%d", &pos);
    if(pos == 1) {
        temp = head;
        head = head->next;
        free(temp);
        return;
    }
    temp = head;
    prev = NULL;
    for(i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) {
        printf("Position out of range\n");
    } else {
        prev->next = temp->next;
        free(temp);
        printf("Node at location %d deleted\n", pos);
    }
}

void sort() {
    struct Node *i, *j;
    int temp;
    if(head == NULL) return;
    for(i = head; i != NULL; i = i->next) {
        for(j = i->next; j != NULL; j = j->next) {
            if(i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    printf("List sorted\n");
}

void search() {
    int key, pos = 1, found = 0;
    struct Node *temp = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    while(temp != NULL) {
        if(temp->data == key) {
            printf("Element found at position %d\n", pos);
            found = 1;
            break;
        }
        temp = temp->next;
        pos++;
    }
    if(!found) printf("Element not found\n");
}

void reverse() {
    struct Node *prev = NULL, *current = head, *next = NULL;
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    printf("List reversed\n");
}

void merge() {
    int n, data, i;
    struct Node *newNode, *temp, *newHead = NULL, *newTemp = NULL;
    printf("Enter number of elements for the second list to merge: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for list 2 node %d: ", i + 1);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;
        
        if(newHead == NULL) {
            newHead = newNode;
            newTemp = newNode;
        } else {
            newTemp->next = newNode;
            newTemp = newTemp->next;
        }
    }

    if(head == NULL) {
        head = newHead;
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newHead;
    }
    printf("Lists merged\n");
}

int main() {
    char choice;
    while(1) {
        printf("\n--- Single Linked List Menu ---\n");
        printf("a. Creation\n");
        printf("b. Traversal\n");
        printf("c. Insertion at the beginning\n");
        printf("d. Insertion at the end\n");
        printf("e. Insertion at any location\n");
        printf("f. Delete the first node\n");
        printf("g. Delete the last node\n");
        printf("h. Deletion from any location\n");
        printf("i. Sorting\n");
        printf("j. Searching\n");
        printf("k. Reversing\n");
        printf("l. Merging\n");
        printf("x. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case 'a': create(); break;
            case 'b': display(); break;
            case 'c': insert_begin(); break;
            case 'd': insert_end(); break;
            case 'e': insert_loc(); break;
            case 'f': delete_begin(); break;
            case 'g': delete_end(); break;
            case 'h': delete_loc(); break;
            case 'i': sort(); break;
            case 'j': search(); break;
            case 'k': reverse(); break;
            case 'l': merge(); break;
            case 'x': exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}