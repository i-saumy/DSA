
#include <stdio.h>

int main()
{
     int a[50],b[50],i,n;
    printf("Enter the total no of elements: ");
    scanf("%d",&n);
    printf("\nEnter the first array:");
    
    for(i=0;i<n;i++)
    {    
        printf(" \nElement- %d :  ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {  
        b[i]=a[i];
    }
    
    printf("\n\nThe elements stored in the first array are:");
    for(i=0;i<n;i++)
    {   
        printf("%2d",a[i]);
    }
    
    printf("\n\nThe elements in the second array:");
    for(i=0;i<n;i++)
    {  
        printf("%2d",b[i]);
    }

    return 0;
}

