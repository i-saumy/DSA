
#include <stdio.h>

int main()
{
    int n,i,sum=0;
    
    printf("Input the Number till you want the sum: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    { 
        sum=sum+i;
    }
    printf("The required sum is: %d",sum);
    
    return 0;
}

