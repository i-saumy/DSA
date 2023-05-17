
#include<stdio.h>

int main()
{
  int i,j,k,m,n,s;
  
  printf("\nEnter the size of the 1st array:");
  scanf("%d",&m);
  
   printf("\nEnter the size of the 2nd array:");
  scanf("%d",&n);
  
  int a[m],b[n];
  s=m+n;
  
  int merge[s];
  
  printf("\nEnter the elements of the 1st array:");
  
  for(i=0;i<m;i++)
  {
      
      scanf("%d",&a[i]);
      merge[i]=a[i];
  }
  
   printf("\nEnter the elements of the 2nd array:");
   
  for(j=0;j<n;j++)
  
  {
      
      scanf("%d",&b[j]);
      merge[i]=b[j];
      i++;
      
  }
      printf("[");
      
  for(k=0;k<s;k++)
  {
      
      printf("%d ",merge[k]);
      
  }
  
  printf("]");
  
    return 0;
}

