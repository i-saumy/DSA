
#include<stdio.h>

int main()
{
    int n,i;
    
    printf("Enter the size of the array:");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter the elements of the array:");
    
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	
    int prev = arr[0];
    
    arr[0] = arr[0] * arr[1];
    
    for (int i=1; i<n-1; i++)
    {
        int curr = arr[i];
        arr[i] = prev * arr[i+1];
        prev = curr;
    }
    
    arr[n-1] = prev * arr[n-1];
    
    printf("The array with the ");
    
    for (int i=0; i<n; i++)
    
     printf("%d  ",arr[i]);
      
    return 0;
}


