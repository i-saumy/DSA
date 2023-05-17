
#include <stdio.h>

int main() 
{
   int a,i;
   
   float m=1;
   
    printf("Enter the number you want to find the factorial for: ");
    scanf("%d",&a);
    
    for(i=a;i>=1;i--)
    
    m=m*i;
    
    printf("The factorial of the number %d is= %f",a,m);
    
    return 0;}
