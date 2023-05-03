
#include <stdio.h>

int main()
{   int a,b,div,remainder;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    div=a/b;
    remainder= a%b;
    printf(" the quotient is %d\n the remainder is %d",div,remainder);

    return 0;
}


