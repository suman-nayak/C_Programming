#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;

struct node *create(struct node *head)
{
	struct node *newnode,*temp;
	int n;
	printf("Enter how many node you want to create: ");
    scanf("%d",&n);
	if(n<1)
	{
		printf("please enter positive number");
	}
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory allocation failed");
		return NULL;
	}
	head=newnode;
	temp=newnode;
	printf("Enter data to node 1: ");
	scanf("%d",&newnode->data);
	newnode->prev=NULL;
	newnode->next=NULL;
	tail=newnode;
	for(int i=2;i<=n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
        	if(newnode==NULL)
        	{
                printf("memory allocation failed");
                return NULL;
        	}
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
		printf("Enter data to node %d: ",i);
		scanf("%d",&newnode->data);
		newnode->next=NULL;
	}
	tail=newnode;
	return head;
}
void traverse()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty");
		return ;
	}
	temp=head;
	int i=1;
	while(temp!=NULL)
	{
		printf("data of node%d: %d\n",i,temp->data);
		i++;
		temp=temp->next;
	}
}

void insert_beg()
{
	struct node *newnode,*temp;
	int n;
	if(head==NULL && tail==NULL)
	{
		printf("list is empty\n");
		newnode=(struct node *)malloc(sizeof(struct node));
            if(newnode==NULL)
            {
                printf("memory allocation failed");
                return ;
            }
		head=newnode;
		tail=newnode;
		printf("enter data to the 1st node: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		return ;
	}
	else
	{
		newnode=(struct node *)malloc(sizeof(struct node));
                if(newnode==NULL)
                {
                    printf("memory allocation failed");
                    return ;
		}
		head->prev=newnode;
		printf("enter data to insert at begning: ");
        scanf("%d",&newnode->data);
		newnode->prev=NULL;
		newnode->next=head;
		head=newnode;
		return ;
	}
}
void insert_end()
{
	struct node *newnode,*temp;
        int n;
        if(head==NULL && tail==NULL)
        {
                printf("list is empty\n");
                newnode=(struct node *)malloc(sizeof(struct node));
                if(newnode==NULL)
                {
                    printf("memory allocation failed");
                    return ;
                }
                head=newnode;
                tail=newnode;
                printf("enter data to the 1st node: ");
                scanf("%d",&newnode->data);
                newnode->next=NULL;
                newnode->prev=NULL;
                return ;
        }
	else
	{
		newnode=(struct node *)malloc(sizeof(struct node));
                if(newnode==NULL)
                {
                    printf("memory allocation failed");
                    return ;
                }
		tail->next=newnode;
		newnode->prev=tail;
		newnode->next=NULL;
		tail=newnode;
		printf("Enter the data to insert at the end: ");
		scanf("%d",&newnode->data);
		return ;
	}
}
void insert_po()
{
    struct node *newnode,*temp;
    int pos,count=1;
    printf("Enter the position: ");
    scanf("%d",&pos);
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory allocation faild");
        return;
    }
    if(head==NULL || pos==1)
    {
        insert_beg();
    }
    else
    {
        temp=head;
        while(temp!=tail)
        {
            temp=temp->next;
            count++;
        }
        if(pos>count)
        {
            printf("entered position is out of bound\n");
            return;
        }
        else
        {
            temp=head;
            count=1;
            printf("enter the data: ");
            scanf("%d",&newnode->data);
            while(count!=pos)
            {
                temp=temp->next;
                count++;
            }
            temp->prev->next=newnode;
            newnode->prev=temp->prev;
            newnode->next=temp;
            temp->prev=newnode;


        }
    }
    return;
}
void delete_beg()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	if(head->prev==NULL && head->next==NULL)
	{
		printf("deleted data is %d\n",head->data);
		head=NULL;
		tail=NULL;
		free(temp);
		return;
	}
	else
	{
		printf("deleted data is %d\n",head->data);
		head=head->next;
		head->prev=NULL;
		free(temp);
		return;
	}

}
void delete_end()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=tail;
	if(head->prev==NULL && head->next==NULL)
	{
		printf("deleted data is %d\n",tail->data);
		head=NULL;
		tail=NULL;
		free(temp);
		return;
	}
	else
	{
		printf("deleted data is %d\n",tail->data);
		tail=tail->prev;
		tail->next=NULL;
		free(temp);
		return;
	}
		
}
void delete_pos()
{
	struct node *temp;
	int pos,length=1,i=1;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	printf("Enter the position to delete: ");
	scanf("%d",&pos);
	if(pos<1)
	{
		printf("please enter positive number\n");
		return;
	}
	temp=head;
	while(temp!=tail)
	{
		temp=temp->next;
		length++;
	}
	temp=NULL;
	if(pos>length)
	{
		printf("Entered position is out of bound\n");
		return;
	}
	if(pos==1)
	{
		delete_beg();
		return;
	}
	if(pos==length)
	{
		delete_end();
		return;
	}
	temp=head;
	while(i!=pos)
	{
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	printf("deleted data is %d\n",temp->data);
	free(temp);
	return;
}
int main()
{
	while(1)
	{
		int a;
		printf("choose any option\n");
		printf("0: exit\n");
		printf("1: creation\n");
		printf("2: traverse\n");
		printf("3: insert at begning\n");
		printf("4: insert at end\n");
		printf("5: insert at any position\n");
		printf("6: Delete first node\n");
		printf("7: Delete last node\n");
		printf("8: Deletion from any location\n");
		scanf("%d",&a);
		if(a==0)
		{
			return 0;
		}
		switch(a)
		{
			case 1:head=create(head);
			       break;
			case 2:traverse();
			       break;
			case 3:insert_beg();
			       break;
			case 4:insert_end();
			       break;
            case 5:insert_po();
                   break;
			case 6:delete_beg();
			   		break;
			case 7:delete_end();
					break;
			case 8:delete_pos();
					break;
			default:printf("Invalid input\n");
	
		}
	}
}