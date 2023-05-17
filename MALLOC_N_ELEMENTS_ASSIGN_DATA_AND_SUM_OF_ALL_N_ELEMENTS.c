#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter elements of array:");
    for(i=0;i<n;++i)
    {
        scanf("%d",ptr+i);
        sum += *(ptr+i);
    }
    
    printf("Sum=%d",sum);
    free(ptr);

    return 0;
}

