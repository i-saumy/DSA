
#include <stdio.h>
int sum(int n)
{
    return(n/10 ? n%10+sum(n/10):n);
}
int main()
{
    int a,s;
    printf("Enter any number");
    scanf("%d",&a);
    s = sum(a);
    printf("Sum of digit of %d = %d",a,s);

    return 0;
}

