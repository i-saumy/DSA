#include <stdio.h>
#include <stdlib.h>

struct linked_list_node 
{
	int info;
	struct linked_list_node* link;
};
struct linked_list_node* headNode = NULL;

void traverse_Linked_List()
{
	struct linked_list_node* tempNode;
	
	if (headNode == NULL)
		printf("\nList is empty\n");
	else 
	{
		tempNode = headNode;
		printf("\nLinked List : ");
		while (tempNode != NULL) 
		{
			if(tempNode->link == NULL)
				printf("%d->NULL\n", tempNode->info);
			else
				printf("%d->", tempNode->info);
			tempNode = tempNode->link;
		}
	}
}

void count_nodes()
{
	struct linked_list_node* tempNode;
	int count = 0;

	if (headNode == NULL)
		printf("\nLinked List is empty\n");
	else 
	{
		tempNode = headNode;
		printf("\nLinked List : ");
		while (tempNode != NULL) 
		{
			count += 1;
			if(tempNode->link == NULL)
				printf("%d->NULL\n", tempNode->info);
			else
				printf("%d->", tempNode->info);
			tempNode = tempNode->link;
		}
	}
	printf("\nThere are %d nodes in Linked list.\n",count);
}

void insert_At_Front()
{
	int data;
	struct linked_list_node* tempNode;
	tempNode = malloc(sizeof(struct linked_list_node));
	printf("\nEnter number to be inserted at start : ");
	scanf("%d", &data);
	tempNode->info = data;

	tempNode->link = headNode;
	headNode = tempNode;
	printf("Element is inserted at start.\n");
	traverse_Linked_List();
}

void insert_At_End()
{
	int data;
	struct linked_list_node *tempNode, *head;
	tempNode = malloc(sizeof(struct linked_list_node));

	printf("\nEnter number to be inserted at end : ");
	scanf("%d", &data);

	tempNode->link = 0;
	tempNode->info = data;
	head = headNode;
	while (head->link != NULL) 
	{
		head = head->link;
	}
	printf("Element is inserted at end.\n");
	head->link = tempNode;
	traverse_Linked_List();
}

void insert_At_Position()
{
	struct linked_list_node *tempNode, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct linked_list_node));

	printf("\nEnter position and data : ");
	scanf("%d %d", &pos, &data);

	tempNode = headNode;
	newnode->info = data;
	newnode->link = 0;
	while (i < pos - 1) 
	{
		tempNode = tempNode->link;
		i++;
	}
	newnode->link = tempNode->link;
	tempNode->link = newnode;
	printf("Element is inserted at %d th position.\n",pos);
	traverse_Linked_List();
}

void delete_from_first()
{
	struct linked_list_node* tempNode;
	if (headNode == NULL)
		printf("\nLinked List is empty\n");
	else 
	{
		tempNode = headNode;
		headNode = headNode->link;
		free(tempNode);
		printf("First element is deleted.\n");
		traverse_Linked_List();
	}
}

void delete_from_end()
{
	struct linked_list_node *tempNode, *prevnode;
	if (headNode == NULL)
		printf("\nList is Empty\n");
	else
	{
		tempNode = headNode;
		while (tempNode->link != 0) 
		{
			prevnode = tempNode;
			tempNode = tempNode->link;
		}
		free(tempNode);
		printf("Last element is deleted.\n");
		prevnode->link = 0;
		traverse_Linked_List();
	}
}

void delete_from_Position()
{
	struct linked_list_node *tempNode, *position;
	int i = 1, pos;


	if (headNode == NULL)
		printf("\nLinked List is empty\n");
	else 
	{
		printf("\nEnter Position : ");
	
		scanf("%d", &pos);
		position = malloc(sizeof(struct linked_list_node));
		tempNode = headNode;
	
		while (i < pos - 1) 
		{
			tempNode = tempNode->link;
			i++;
		}

		position = tempNode->link;
		tempNode->link = position->link;
		printf("%d th element is deleted.\n",pos);
	
		free(position);
		traverse_Linked_List();
	}
}

void deleteNode_with_key()
{
    struct linked_list_node *tempNode, *prevnode;
    int key;
    
    if (headNode == NULL)
		printf("\nLinked List is empty\n");
	else
	{
		printf("\nEnter a Node key to delete : ");
		scanf("%d", &key);	
		tempNode = headNode;
	   
	    if (tempNode != NULL && tempNode->info == key) 
		{
	        headNode = tempNode->link; 
	        free(tempNode); 
	        printf("\n%d is deleted.",key);
			traverse_Linked_List();	        
	        return;
	    }

	    while (tempNode != NULL && tempNode->info != key) 
		{
	        prevnode = tempNode;
	        tempNode = tempNode->link;
	    }
	 

	    if (tempNode == NULL)	    
		{	
	        printf("\n%d is not present in linked list.",key);
			traverse_Linked_List();	
	        return;
		}
	    else
	    {
		  
		    prevnode->link = tempNode->link;
		 	
		    printf("\n%d is deleted.",key);
			traverse_Linked_List();	        
		    free(tempNode); 
		}
	}
}


void searchNode_with_key()
{
  
    struct linked_list_node *tempNode, *prevnode;
    int key;
    
    if (headNode == NULL)
		printf("\nLinked List is empty\n");
	else
	{
		printf("\nEnter a Node key to search : ");
		scanf("%d", &key);	
		tempNode = headNode;
	   
	    if (tempNode != NULL && tempNode->info == key) 
		{
	        printf("\n%d is Found in Linked list.",key);
			traverse_Linked_List();	        
	        return;
	    }
	 
	   
	    while (tempNode != NULL && tempNode->info != key) 
		{
	        prevnode = tempNode;
	        tempNode = tempNode->link;
	    }
	 
	  
	    if (tempNode == NULL)
		{	    	
	        printf("\n%d is not present in linked list.",key);
			traverse_Linked_List();	
	        return;
		}
		else
		{
			printf("\n%d is Found in Linked list.",key);
			traverse_Linked_List();	
		}
	}
}


int main()
{
	int choice;
	while (1)
	{
		printf("\n\t1 To see list is empty or not? \n");
		printf("\t2 To insertion at starting\n");
		printf("\t3 To insertion at end\n");
		printf("\t4 To insertion at any position\n");
		printf("\t5 To deletion of first element\n");
		printf("\t6 To deletion of last element\n");
		printf("\t7 To deletion of element at any position\n");
		printf("\t8 To count number of elements in linked list\n");
		printf("\t9 To deletion of element from linked list\n");
		printf("\t10 To searching of element in linked list\n");
		printf("\t11 To exit\n");
		printf("\nEnter Choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				traverse_Linked_List();
				break;
			case 2:
				insert_At_Front();
				break;
			case 3:
				insert_At_End();
				break;
			case 4:
				insert_At_Position();
				break;
			case 5:
				delete_from_first();
				break;
			case 6:
				delete_from_end();
				break;
			case 7:
				delete_from_Position();
				break;
			case 8:
				count_nodes();
				break;
			case 9:
				deleteNode_with_key();
				break;
			case 10:
				searchNode_with_key();
				break;
			case 11:
				exit(1);
				break;
			default:
				printf("Incorrect Choice\n");
		}
	}
	return 0;
}
