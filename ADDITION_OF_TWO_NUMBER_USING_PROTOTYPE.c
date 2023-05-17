
#include <stdio.h>
void addition();

int main()
{
    addition();

    return 0;
}
void addition()
{
    int num1,num2;
    int add;
    
    printf("\nEnter the numbers : ");
    scanf("%d%d",&num1,&num2);
    add = num1 + num2 ;
    printf("\n Addition of two numbers is %d ",add);
}
