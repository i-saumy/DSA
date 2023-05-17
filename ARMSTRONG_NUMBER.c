
#include <stdio.h>
#include <math.h>

int main() {
   int a,n=0,r,s=0,t;
    printf("Enter the number you want to see if it is a Armstrong number: ");
    scanf("%d",&a);
    t=a;
   while(t!=0)
   {
       t=t/10;
       ++n;
   }
   t=a;
   while(t!=0)
   {
       r=t%10;
       s+=pow(r,n);
       t=t/10;
   }
   
       if(s==a)
       printf("The number is Armstrong number");
       else
       printf("The number is not armstrong");
    
    return 0;
}
