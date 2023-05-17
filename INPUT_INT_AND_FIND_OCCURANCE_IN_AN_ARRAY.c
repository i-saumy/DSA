
#include <stdio.h>

int main()
{
    int a[5],i,k,count=0;
    
  printf("Enter the elements of the array:");
  
  for(i=0;i<5;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("Enter the integer to find its occurence in the array:");
  scanf("%d",&k);
 
 for(i=0;i<5;i++)
 {
     if(a[i]==k)
     {
         count=count+1;
     }
 }
 printf("The number of times it ocurred is= %d",count);


   return 0;
}
