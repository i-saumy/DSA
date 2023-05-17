
#include <stdio.h>

int main()
{   int i;
   printf("The prime number from 1 to 300 are \n "); 
    for(i=1;i<=300;i++)
    {
        { if (i==1)
            printf("1 is neither a prime number nor a composite number\n");
        }    
       int j,prime,count=0;
        
       for(j=2;j<i/2;j++)
       { 
          prime=i%j;
          if (prime==0)
            {
                count++;
                break;
            }
       }
      
 if (count==0 && i!=1)
 {
     printf("%d ",i);
 }
}
    return 0;
}




