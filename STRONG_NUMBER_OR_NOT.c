
#include <stdio.h>

int facto(int r)
{
    int k=1;
    
    for(int i=1;i<=r;i++)
    
    {
        
        k=k*i;
    }
    
    return k;
}

int main()
{
   int num;
   int temp=0;
   printf("Enter a number:");
   scanf("%d",&num);
   
   int con = num;
   
   int r;
   
   while(con!=0)
   {
       r = con%10;
       con = con/10; //?//
       facto(r);
       
       temp = temp + facto(r);
   }
   if (temp==num)
   {
       printf("STRONG NUMBER");
   }
   else
   {
       printf("NOT A STRONG NUMBER");
   }
   return 0;
}


