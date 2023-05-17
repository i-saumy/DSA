#include<stdio.h>

void printNGE(int arr[], int n)

{
    
 int next;
 
 printf("The required result is:\n");
  
 for (int i=0; i<n; i++)
 
 {
     
 next = 0;
 
 for (int j = i+1; j<n; j++)
 
 {
     
 if (arr[i] < arr[j])
 
 {
     
 next = arr[j];
 break;
 
 }
 
 }
 
 printf("%d -- %d\n", arr[i], next);
 
 } 
    
}

int main()

{
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
     int arr[size];
     
     printf("Enter the elements of the array: ");
     
     for(int i = 0; i < size; i++)
     
     {
         
     scanf("%d", &arr[i]);
     
    }
    
 printNGE(arr, size);
 
}
