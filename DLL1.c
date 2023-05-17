
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head=NULL, *ptr;

void insert_begin(int value)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	if (head== NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		temp->prev=temp;
		head=temp;
	}
}
void insert_end(int value)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	if (head== NULL)
	{
		head=temp;
	}
	else
	{
	    ptr=head;
	    while(ptr->next!=NULL)
	    {
	        ptr= ptr->next;
	    }
	    ptr->next=temp;
	    temp->prev=ptr;
	}
}
	void insert_After_specificedele(int value,int ele)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	if (head== NULL)
	{
		head=temp;
	}
	else
	{
	    ptr=head;
	    while(ptr->data!=ele)
	    {
	        ptr= ptr->next;
	    }
	    temp->next= ptr->next;
	    temp->prev=ptr;
	    ptr->next->prev=temp;
	    ptr->next= temp;
	}
    
}

void delete_begin()
{
	
	if (head== NULL)
	{
		printf("List is empty");
	}
	else
	{
	   ptr=head;
	   head=head->next;
	   ptr->next=NULL;
	   head->prev=NULL;
	   free(ptr);
	}
}
void delete_end()
{
	
	if (head== NULL)
	{
		printf("List is empty");
	}
	else
	{
	   ptr=head;
	   while(ptr->next!=NULL)
	   {
	       ptr=ptr->next;
	   }
	   ptr->prev->next=NULL;
	   ptr->prev=NULL;
	   free(ptr);
	   }
}
void delete_middle(int ele)
{
	
	if (head== NULL)
	{
		printf("List is empty");
	}
	else
	{
	   ptr=head;
	   while(ptr->data!=ele)
	   {
	       ptr=ptr->next;
	   }
	   ptr->prev->next=ptr->next;
	   ptr->prev->next=ptr->prev;
	   ptr->next=NULL;
	   ptr->prev=NULL;
	   free(ptr);
	}
}
void display()
{
    {
	if (head== NULL)
	{
		printf("List if Empty");
	}
	else
	{
		ptr=head;
		while( ptr != NULL)
		{
			printf(" %d <=> ", ptr->data);
			ptr=ptr->next;
		}
		printf("\n");
	}
}

int main()

{
    	int value,ele,ch;
	printf("1. Insert_begin \n");
	printf("2. Insert_end \n");
	printf("3. Insert_After_specified_element \n");
	printf("4. delete_begin \n");
	printf("5. delete_end \n");
	printf("6. delete_middle \n");
	printf("7. exit \n");
	
	while(1)
	{
		printf("Enter the Choice \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("Enter the value");
					scanf("%d",&value);
					insert_begin(value);
					display();
					break;
				}
				case 2:
				{
					printf("Enter the value");
					scanf("%d",&value);
					insert_end(value);
					display();
					break;
				}	
				case 3:
				{
					printf("Enter the value");
					scanf("%d",&value);
					printf("After which element u want to insert");
					scanf("%d",&ele);
					insert_After_specificedele(value,ele);
					display();
					break;
				}
				case 4:
				{
					delete_begin();
					display();
					break;
				}
				case 5:
				{
					delete_end();
					display();
					break;
				}
				case 6:
				{
					printf("Enter the element you want to delete");
					scanf("%d",&ele);
					delete_middle(ele);
					display();
					break;
				}	
				case 7:
					exit(0);
								
				}
		}
	}
}



