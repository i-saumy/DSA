
int findElement(int a[],int num)
{
    int i, pos = 0;
    for (i = 0; i < 5; i++) 
    {
        if (a[i] == num) 
        {
            pos = i+1;
            break;
        }
    }
    return pos;
}

#include <stdio.h>

int main()
{
    int arr[5],i,num,pos;
    
  printf("Enter the elements of the array:");
  
  for(i=0;i<5;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("Enter the number you want to find in an array :");
  scanf("%d",&num);
  
    {
        pos = findElement(arr,num);
    if (pos == 0)
        printf("\n %d is not present in the given array.\n", num);
    else
        printf("\n %d is presnt in the given array at %d position.\n",num,pos);
    }
}
