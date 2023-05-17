
#include <stdio.h>

void palindrome(int n)
{
    int r=0,org=n;
    while (n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if (r==org)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    palindrome(a);
    

    return 0;
}



