#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node* next;
};

struct node* head=NULL;


struct node* create_node();
void create();
void traverse();
void insert_beg();
void insert_end();
void insert_specific();
void delete_beg();
void delete_end();
void delete_specific();
int length();

void main(){
        int choice;
        printf("\n");
        printf("\n____________ CIRCULAR SINGLY LINKED LIST ______________\n\n");
        while(1){
                printf("Select from these option.\n1. Create a list\n2. Traverse a list\n3. Insert at beginning of a list\n4. Insert at end of a list\n5. Insert at any location of a list\n6. Delete the first node of a list\n7. Delete the last node of a list\n8. Delete any node of a list\n9 . Exit\n");
                printf("\nEnter your choice:\n");
                scanf("%d",&choice);

                switch(choice){
                        case 1: create();
                                break;
                        case 2: traverse();
                                break;
                        case 3: insert_beg();
                                break;
                        case 4: insert_end();
                                break;
                        case 5: insert_specific();
                                break;
                        case 6: delete_beg();
                                break;
                        case 7: delete_end();
                                break;
                        case 8: delete_specific();
                                break;
                        case 9: printf("\nExiting...\n\n");
                                return;
                        default: printf("Please enter valid option");
                }
                printf("\n\n--------------------------------------------------------------\n\n");
        }
}	


struct node* create_node(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("Memory allocation failed");
		return 0;
	}
        printf("Enter data:  ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}


void create(){
        struct node* newnode=NULL,*temp=NULL;
        int i,n;
        if(head!=NULL){
                printf("List is already exist. Please enter other option to proceed further");
                return;
        }
        printf("\nEnter the no of node you want to create:  ");
        scanf("%d",&n);

        temp = create_node();
        head=temp;
	temp->next=head;

        for(i=2;i<=n;i++){
                newnode = create_node();
		temp->next=newnode;
                newnode->next=head;
		temp=newnode;
        }
        printf("\nList is created successfully\n\n");
}

void traverse(){
	struct node* temp=head;
	if(head==NULL){
		printf("List is empty");
		return;
	}
	if(head->next==head){
		printf("%d",head->data);
		return;
	}
	printf("%d\t",temp->data);
	temp=temp->next;
	while(temp!=head){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

void insert_beg(){


     struct node *newnode,*temp=head;
     newnode=create_node();
     newnode->next=head;
     if(head==NULL){
	     head=newnode;
	     newnode->next=head;
	     return;
     }
     temp=head->next;
     while(temp->next!=head){
	     temp=temp->next;
     }
     temp->next=newnode;
     head=newnode;
     printf("Node inserted successfully");
}

void insert_end(){
        struct node* newnode,*temp=head;
        newnode = create_node(); 
        newnode->next=head;
	if(head==NULL){
             head=newnode;
             newnode->next=head;
             return;
        }

        while(temp->next != head){
                temp=temp->next;
        }
        temp->next=newnode;
        printf("\nNode is inserted successfully\n");
}

void insert_specific(){
        int count =1,loc;
        struct node* newnode,*temp=head,*ptr;
        printf("Enter the location:\n");
        scanf("%d",&loc);
        if(head!=NULL && loc==1){
                insert_beg();
                return;
        }
        newnode = create_node();
        while(temp!=NULL && count !=loc){
                count++;
                ptr=temp;
                temp=temp->next;
        }
        if(temp==NULL && count !=loc){
                printf("\nEntered location is out of bound\n");
        }
        else{
                ptr->next=newnode;
                newnode->next=temp;
                printf("\nNode inserted successfully\n");
        }
}

void delete_beg(){
        struct node* temp=head,*ptr=head;
        if(head==NULL){
                printf("List is empty");
                return;
        }
        if(head->next==head){
                head=NULL;
        }
        else{
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=head->next;
                head=head->next;
        }
        printf("\ndata %d is deleted successfully\n",ptr->data);
        free(ptr);
}


void delete_end(){
        struct node* temp=head,*ptr;
        if(head==NULL){
                printf("List is empty");
                return;
        }
        if(head->next==head){
                head=NULL;
        }
        else{
                while(temp->next!=head){
                        ptr=temp;
                        temp=temp->next;
                }
                ptr->next=head;
        }
        printf("\ndata %d is deleted successfully\n",temp->data);
        free(temp);
}

void delete_specific(){
        struct node* temp=head,*ptr;
        int loc,count=1;
        if(head==NULL){
                printf("List is empty");
                return;
        }
        if(head->next==NULL){
                head=NULL;
        }
        printf("Enter the position:  ");
        scanf("%d",&loc);
        if(loc==1){
                delete_beg();
        }
        else{
                while(temp!=NULL && count!=loc){
                        ptr=temp;
                        temp=temp->next;
                        count++;
                }
                if(temp==NULL){
                        printf("\nLocation is out of bound\n");
                        return;
                }
                ptr->next=temp->next;
                printf("\ndata %d is deleted successfully\n",temp->data);
                free(temp);
        }
}
