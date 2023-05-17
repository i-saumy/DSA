
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top = 0;

void Push(int x)
{
    struct node  *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode ->data =x;
    newnode -> link = top;
    top = newnode;
}

void Display()
{
    struct node *temp;
    temp = top;
    if(top==0)
    {
        printf("List is empty ");
    }
    else
    {
         while( temp != 0)
        {
            printf("%d ",temp->data);
            temp = temp->link;
        }
    }
       
}
void Peek()
{
    
     if(top==0)
    {
        printf("List is empty ");
    }
    else
    {
        printf("%d ",top->data);
    }
}
 void Pop()
 {
    struct node *temp;
    temp = top;
    if(top==0)
    {
        printf("List is empty ");
    }
     else
    {
        printf("%d ",top->data);
        top = top->link;
        free(temp);
    }
 }

int main()

{   
    int ch;
    int no;
    while(1)
    {
        printf("\n1.Push the element\n2.Pop the element\n3.Peek\n4.Show\n5.End");
        printf("\n\nEnter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : 
            printf("Enter data : ");
            scanf("%d", &no);
            Push(no);
            break;
            
            case 2 : Pop();
            break;
            
            case 3 : Peek();
            break;
            
            case 4 : Display();
            break;
            
            case 5 : exit(0);
        }
    }
    return 0;
}


