#include <stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *next;
}*stnode;
void createnode(int n);
int isListEmpty();
void display_traverse();
void addbegin();
void addend();
void addpos();
void delete_begin();
void delete_end();
void delete_pos();
void count_nodes();
void search();
void del_key();
int count_node();
int main() 
{
    int n;
    printf("\nWELCOME TO THE LINKED LIST PROGRAM\n");
                printf("\n                MENU                            \n");
                printf("\n 1.Create     \n");
                printf("\n 2.Checking Node Empty or not:     \n");
                printf("\n 3.Display    \n");
                printf("\n 4.Insert at the beginning    \n");
                printf("\n 5.Insert at the end  \n");
                printf("\n 6.Insert at specified position       \n");
                printf("\n 7.Delete from beginning      \n");
                printf("\n 8.Delete from the end        \n");
                printf("\n 9.Delete from specified position     \n");
                printf("\n 10.Delelte a node for a given array:  \n");
                printf("\n 11.Count no of nodes:");
                printf("\n 12.Search for an element in the linked list  \n");
                printf("\n 13.Exit       \n");
                printf("\n--------------------------------------\n");
                
               printf("Enter the no. of node :");
                scanf("%d",&n);
        int choice;
        while(1)
        {
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        createnode(n);
                                        break;
                        case 2:
                                        isListEmpty();
                                        break;
                        case 3:
                                        display_traverse();
                                        break;
                        case 4: 
                                        addbegin();
                                        break;
                        case 5:
                                        addend();
                                        break;
                        case 6:
                                        addpos();
                                        break;
                        case 7:
                                        delete_begin();
                                        break;
                        case 8:
                                        delete_end();
                                        break;
                        case 9:
                                        delete_pos();
                                        break;
                                        
                        case 10:      del_key();
                                        break;
                         
                        case 11:     count_nodes();
                                        break;
                                        
                        case 12:      search();
                                        break;
                  
                        case 13:       exit(0);
                                      printf("\nTHANK YOU FOR USING THE LINKED LIST PROGRAM!!\n");
                                        break;
                             
                        default:
                                        printf("n Wrong Choice:n");
                                        break;
                }
        }
        return 0;
}
 void createnode(int n)
 {
     struct node *fnnode,*temp;
     int num,i;
     stnode=(struct node*)malloc(sizeof(struct node*));
     if(stnode== NULL)
     {
         printf("Overflow");
     }
     else
     {
         printf("Input the data for node:");
         scanf("%d",&num);
         stnode->num= num;
         stnode->next=NULL;
         temp=stnode;
     }     
     for(int i=2;i<=n;i++)
     {
        fnnode=(struct node*)malloc(sizeof(struct node*));
        if(fnnode== NULL)
        {
            printf("Overflow");
        }
        else
        {
            printf("Input the data for node:");
            scanf("%d",&num);
            fnnode->num=num;
            fnnode->next=NULL;
            temp->next=fnnode;
            temp=temp->next;
        }
     }    
 }
 int isListEmpty()
{
    if (stnode == NULL)
    {
        printf("The linked list is empty!\n");
        return 1;
    }
    else
    {
        printf(" Your linked list is not empty.\n");
        return 0;
    }
}
 void display_traverse()
 {
     struct node*temp1;
     if(stnode==NULL)
     printf("Empty List:");
     else
     {
         temp1=stnode;
         do
         {
             printf("\nData is %d",temp1->num);
             temp1=temp1->next;
         }while(temp1!=NULL);
     }
 }
 void addbegin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->num);
        temp->next =NULL;
        if(stnode==NULL)
        {
                stnode=temp;
        }
        else
        {
                temp->next=stnode;
                stnode=temp;
        }
}
void addend()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->num );
        temp->next =NULL;
        if(stnode==NULL)
        {
                stnode=temp;
        }
        else
        {
                ptr=stnode;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
void addpos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:n");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:\t");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:\t");
        scanf("%d",&temp->num) ;
  
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=stnode;
                stnode=temp;
        }
        else
        {
                for(i=0,ptr=stnode;i<pos-1;i++) 
                { 
                    ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found:[Handle with care]\n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}
void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("nList is Empty:n");
                return;
        }
        else
        {
                ptr=stnode;
                stnode=stnode->next ;
                printf("nThe deleted element is :%dt",ptr->num);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(stnode==NULL)
        {
                printf("nList is Empty:");
                exit(0);
        }
        else if(stnode->next ==NULL)
        {
                ptr=stnode;
                stnode=NULL;
                printf("nThe deleted element is:%dt",ptr->num);
                free(ptr);
        }
        else
        {
                ptr=stnode;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("nThe deleted element is:%dt",ptr->num);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(stnode==NULL)
        {
                printf("nThe List is Empty:n");
                exit(0);
        }
        else
        {
                printf("nEnter the position of the node to be deleted:t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=stnode;
                        stnode=stnode->next ;
                        printf("nThe deleted element is:%dt",ptr->num );
                        free(ptr);
                }
                else
                {
                        ptr=stnode;
                        for(i=0;i<pos;i++) 
                        { temp=ptr; 
                        ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("nPosition not Found:n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("nThe deleted element is:%dt",ptr->num );
                        free(ptr);
                }
        }
}
void count_nodes()
{
    int c=0;
    struct node*temp=stnode;
    while(temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
    printf("\n The number of nodes present are:%d:",c );
}
void search()
{
    int data, flag=0;
    struct node *ptr;
    printf("\nEnter the data to search: ");
    scanf("%d", &data);
    ptr=stnode;

   while(ptr!=NULL)
   {    
        flag++;
        if(ptr->num==data)
        {
            printf("\nThe data is located at node %d", flag);
            flag=0;
            break;
        }
        ptr=ptr->next;
    }
    if(flag!=0)
    printf("\nGiven data is not in the list.");
}
void del_key()
{
    struct node *prev, *current;
    int pos, flag;
    prev=stnode;
    current=stnode;
    printf("\nEnter the position of node you want to delete: ");
    scanf("%d", &pos);
    flag=count_node();
    if(pos<=0)
    {
        printf("\nInvalid key!");
        exit(1);
    }
    if(pos>flag)
    {
        printf("\nGiven position is not in the list.");
        exit(1);
    }

    printf("\nList before operation:\n");
    display_traverse();

    printf("\nThe list after operation:\n");
    if(pos==1)
    {
       delete_begin();
       display_traverse();
    }
    else
    {
        while(pos!=1)
        {
            prev=current;
            current=current->next;
            pos--;
        }
    }
    prev->next=current->next;
    free(current);
    current=NULL;
    display_traverse();
}
int count_node()
{
    struct node *ptr;
    int d=0;
    ptr=stnode;
    while(ptr!=NULL)
    {
        d++;
        ptr=ptr->next;
    }
    return d;
}
