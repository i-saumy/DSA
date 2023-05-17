#include <stdio.h>
 
    int main()
    {
 
        int a[100], i, num;
        
        printf("Enter the size of an array \n");
        scanf("%d", &num);
        
        printf("Enter the elements of the array \n");
 
        for (i = 0; i < num; i++) 
        {
            scanf("%d", &a[i]);
        }
 
        printf("The numbers assembled as: ");
        
        for (i = 0; i < num; i++) 
        {
            if (a[i] % 2 == 0) 
            
            {
                printf("%d ", a[i]);
            }
           
        }
        
        for (i = 0; i < num; i++) 
        
        {
            if (a[i] % 2!=0)
            
            {
                printf("%d ",a[i]);
            }
            
        }
        return 0;
    }

