#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void sort_list();
void search();
void reverse_list();

int main() {
    int ch;
    while(1) {
        printf("\n====== SINGLE LINKED LIST MENU ======\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Insert at Beginning\n");
        printf("4. Insert at End\n");
        printf("5. Insert at Any Position\n");
        printf("6. Delete First Node\n");
        printf("7. Delete Last Node\n");
        printf("8. Delete from Any Position\n");
        printf("9. Sort\n");
        printf("10. Search\n");
        printf("11. Reverse\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: create();
            break;
            case 2: display();
            break;
            case 3: insert_begin();
            break;
            case 4: insert_end(); 
            break;
            case 5: insert_pos(); 
            break;
            case 6: delete_begin(); 
            break;
            case 7: delete_end(); 
            break;
            case 8: delete_pos();
            break;
            case 9: sort_list();
            break;
            case 10: search(); 
            break;
            case 11: reverse_list(); 
            break;
            case 0: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}

void create() {
    int n, i, val;
    struct node *newnode, *temp;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &val);

        newnode->data = val;
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
void display() {
    struct node *temp = head;
    if(head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void insert_begin() {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;
}
void insert_end() {
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

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
void insert_pos() {
    int pos, i = 1;
    struct node *newnode, *temp;

    printf("Enter position: ");
    scanf("%d", &pos);

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if(pos == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }
    temp = head;
    while(i < pos-1 && temp != NULL) {
        temp = temp->next;
        i++;
    }
    if(temp == NULL) {
        printf("Invalid Position!\n");
        free(newnode);
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void delete_begin() {
    struct node *temp;
    if(head == NULL) {
        printf("List is empty!\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
}
void delete_end() {
    struct node *temp, *prev;

    if(head == NULL) {
        printf("List is empty!\n");
        return;
    }
    if(head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    temp = head;
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}
void delete_pos() {
    int pos, i = 1;
    struct node *temp, *prev;

    if(head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos == 1) {
        temp = head;
        head = head->next;
        free(temp);
        return;
    }
    temp = head;
    while(i < pos && temp != NULL) {
        prev = temp;
        temp = temp->next;
        i++;
    }
    if(temp == NULL) {
        printf("Invalid Position!\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}
void sort_list() {
    struct node *i, *j;
    int temp;

    for(i = head; i != NULL; i = i->next) {
        for(j = i->next; j != NULL; j = j->next) {
            if(i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    printf("List Sorted Successfully!\n");
}
void search() {
    int key, pos = 1;
    struct node *temp = head;
    printf("Enter element to search: ");
    scanf("%d", &key);

    while(temp != NULL) {
        if(temp->data == key) {
            printf("Element found at position %d\n", pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element not found!\n");
}
void reverse_list() {
    struct node *prev = NULL, *curr = head, *next;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    printf("List Reversed Successfully!\n");
}