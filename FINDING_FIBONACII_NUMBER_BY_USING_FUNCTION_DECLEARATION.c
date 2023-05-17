
#include <stdio.h>
int fibonacci (int n)
{
    if(n==1 || n==2) return 1;
    else
    return (fibonacci(n-1)+fibonacci(n-2));

}

int main()

{   
    int a,f;
    printf("Enter the value of n  :");
    scanf("%d",&a);
    f=fibonacci(a);
    printf("Fibonacci number of nth place:%d",f);

    return 0;
}

