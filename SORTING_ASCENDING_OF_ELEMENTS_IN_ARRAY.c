
#include <stdio.h>
int main()
{
    int a[50],i,b,l,s;
    printf("\nEnter the number of elements : ");
    scanf("%d",&b);
    
       printf("\nInput the array elements : ");
    
    for(i=0;i<b;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<b;i++)
    {
        for(l=i+1;l<b;l++)
        {
            if(a[i]>a[l])
            {
                s=a[i];
                a[i]=a[l];
                a[l]=s;
            }
        }
    }
     printf("The numbers are sort in ascending order as: \n");
     for(i=0;i<b;i++)
     {
         printf("%d\t",a[i]);
     }
        
return 0;
}

