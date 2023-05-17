
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter the size of array:");
    scanf("%d",&num);
    
    printf("Enter the array elements :");
    int a[num];               
    
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<num;i++)   
    
    {
        int temp;
        
        for(int j=i+1; j<num;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[num-2]); 
    
    printf("\nThe second largest element is %d",a[1]);     
}
