
#include <stdio.h>

int main()
{
    int *ptr,arr[20],i,n,sum=0;
    ptr=arr;
    printf("Enter the size of array - ");
    scanf("%d",&n);
    printf("Enter the values of array - ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    sum += *(ptr + i);
    {
        printf("\n SUM = %d",sum);
    }
    return 0;
}

