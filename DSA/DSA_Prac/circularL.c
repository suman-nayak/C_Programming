#include <stdio.h>
#include <stdlib.h>
 struct node{
    int data;
    struct node *next;
 };
 struct node *head=NULL;
 void create(){
    struct node *temp=NULL, *newnode=NULL;
    printf("enter how many node you want to create \n");
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL){
            printf("memory allocation faled \n");
            return;
            
        }
         printf("enter the data for node %d:   \n",i);
         scanf("%d",&newnode->data);
         if (head==NULL){
            head=newnode;
            temp=newnode;
            newnode->next=head;
         }
         else{
            temp->next=newnode;
            newnode->next=head;
            temp=newnode;
         }
         
         
    }
 }
 //------traverse
 void traverse(){
    if(head==NULL){
        printf("create list \n");
        return;
    }
    struct node *temp=NULL;
    temp=head;
   do
   {
    printf("%d->",temp->data);
    temp=temp->next;
    
   } while (temp!=head);
   printf("HEAD");  
 }
 //----------insert at begning
 void insert_beg(){
    struct node *newnode=NULL,*temp;
    if(head==NULL){
        printf("create list \n");
        return;
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL){
            printf("memory allocation faled \n");
            return;
            
        }
    printf("enter the data at begning \n");
    scanf("%d",&newnode->data);
    temp=head;

    while(temp->next != head){
        temp=temp->next;
    }

    newnode->next=head;
    temp->next=newnode;
    head=newnode;
 }
 //---------------------insert at end
  void insert_end(){
    struct node *newnode=NULL,*temp;
    if(head==NULL){
        printf("create list \n");
        return;
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL){
            printf("memory allocation faled \n");
            return;
            
        }
    printf("enter the data at end \n");
    scanf("%d",&newnode->data);
    temp=head;

    while(temp->next != head){
        temp=temp->next;
    }
    newnode->next=head;
    temp->next=newnode;  
 }
 //----------------------calculate length;
 int length(){
   struct node * temp;
   if(head==NULL){
      printf("empty list");
      return 1;
   }
   int count=0;
   temp=head;
   do{
      count++;
      temp=temp->next;
   }
   while(temp!=head);
   return count;
 }
 //-----------------------------insert at any location
 void insert_spec(){
    struct node *newnode=NULL,*temp;
    if(head==NULL){
       printf("create list \n");
       return;
      }
      newnode=(struct node *)malloc(sizeof(struct node));
      if(newnode==NULL){
         printf("memory allocation faled \n");
         return;
         
      }
      printf("enter the location u want to insert");
      int loc,i;
      scanf("%d",&loc);
      if(loc==1){
         insert_beg();
         return;
      }
      int j=length();
      if(loc==j){
         insert_end();
         return;
      }
      temp=head;
      for(i=1;i<loc-1;i++){
         temp=temp->next;
      }
      
      printf("enter the data at specific\n");
      scanf("%d",&newnode->data);
      newnode->next=temp->next;
      temp->next=newnode;
      
   }
   //----------------------delete the first node
   
   void delete_beg(){
      struct node *temp=head,*ptr=head;
      if(head==NULL){
         printf("create list \n");
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
           printf("deleted data is %d ",ptr->data);
           free(ptr);  
        }
     }
     //----------------------delete the last node
   
   void delete_end(){
      struct node *temp=head,*ptr=NULL;
      if(head==NULL){
         printf("create list \n");
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
         //   temp->next=head->next;
         ptr->next=temp->next;
         //   head=head->next;
           printf("deleted data is %d ",temp->data);
           free(temp);
           
        }  
     }
     //-----------------------delete at any location
     void delete_spec(){
      struct node *temp=head,*ptr=NULL;
      if(head==NULL){
         printf("create list \n");
         return;
        }
        printf("enter location to delete");
        int loc,i=1;
        scanf("%d",&loc);
        if(loc<=0 || loc>length()){
         printf("invalid input");
         return;
        }
        if(loc==1){
         delete_beg();
         return;
        }
        if(loc==length()){
         delete_end();
         return;
        }
        while(i<loc){
         ptr=temp;
         temp=temp->next;
         i++;
        }
        ptr->next=temp->next;
        printf("the deleted data is %d",temp->data);
        free(temp);
     }
   int main(){
      
      int ch;
    while(1){
     printf("\n1-create node\n");
     printf("2-traverse the node\n");
     printf("3-insertion at begning\n");
     printf("4-insertion at end\n");
     printf("5-insertion at any location\n");
     printf("6-delete the first node->\n");
     printf("7-delete the last node->\n");
     printf("8-delete from any location node->\n");
     printf("9 for exit \n");
     scanf("%d",&ch);
     if(ch==9){
        printf("program has been exited successfully \n");
        break;
        
     }
     switch (ch)
     {
     case 1: 
        create();
        break;
     case 2:
         traverse();
         break;
    case 3:
        insert_beg();
        break;
   case 4:
      insert_end();
      break;
   case 5:
      insert_spec();
      break;
   case 6:
      delete_beg();
      break;
   case 7:
      delete_end();
      break;
   case 8:
      delete_spec();
      break;

     default:

        printf("invalid input \n");
        
     }
     
     
    }
    // return 0;
 }