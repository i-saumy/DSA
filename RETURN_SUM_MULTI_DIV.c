
#include <stdio.h>

int sum(int a,int b)
{   
    int c;
    c=a+b;
    return c;
}
int sub (int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int multiply(int a,int b)
{ 
    int c;
    c=a*b;
    return c;
}
int divide(int a,int b)
{
    int c;
    c=a/b;
    return c;
}
int main()
{   
    int i,a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    i=sum(a,b);
    printf("Addition of two number is %d \n",i);
    i=sub(a,b);
    printf("Substraction of two number is %d \n",i);
    i=multiply(a,b);
    printf("Multiplication of two number is %d \n",i);
    i=divide(a,b);
    printf("Division of two number is %d \n",i);
    

    return 0;
}

