#include <stdio.h>

void perfect (int n)

{
    int i,rem,sum=0;
    for(i=1;i<n;i++)
    {
        rem=n%i;
        if (rem==0)
            sum=sum+i;
    }
    if (sum==n)
        printf("Perfect Number");
    else
        printf("Not a perfect number");
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    perfect(a);

    return 0;
}

