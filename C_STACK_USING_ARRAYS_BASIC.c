#include <stdio.h>
#include <stdlib.h>

#define N 5

int stack[N];
int top=-1;


void Push()
{
     int x;
    
    printf("enter data");
    scanf("%d",&x);
    
    if(top==N-1)
    {
       printf("Overflow");
    }
    else{
        top++;
        stack[top] = x;
    }

}

void Pop()
{
    if(top==-1)
    {
       printf("Underflow");
    }
    else
    {
       
        printf("%d",stack[top]);
         top--;
    }

}

void Peek()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d",stack[top]);
    }
    
}

void Display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}

int main()

{   int ch;
    while(1)
    {
        printf("\n1.Push the element\n2.Pop the element\n3.Peek\n4.Show\n5.End");
        printf("\n\nEnter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : Push();
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

