
#include <stdio.h>
int factorial(int n)
{
    return (n==1 ? 1 : n*factorial(n-1));
}

int main()
{
    int a,fact;
    printf("Enter any number");
    scanf("%d",&a);
    fact = factorial(a);
    printf("The factorial value = %d",fact);
    return 0;
}

