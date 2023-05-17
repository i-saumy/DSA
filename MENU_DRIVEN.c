#include <stdio.h>

int main()
{    int i,p,j,t,flag;
    printf("Prees 1 for finding a factorial for a number\n");
    printf("Press 2 for finding the number is prime or not\n");
    printf("Press 3 for finding the number is odd or even\n");
    printf("Press 4 for EXIT\n");
    scanf("%d",&i);
    
    switch(i)
    {
        case 1: 
        
         printf("Enter the number of what you want to find the factorial :");
         scanf("%d",&p);
         t=1;
         for(j=1;j<=p;j++)
         {
             
             t=t*j;
         }
            printf("Factorial of the entered number is %d",t);
            break;
         
        case 2 :
            printf("Enter the number you want to check it is prime or not:");
            scanf("%d",&p);
            flag=0;
            for(j=2;j<p;j++)
            {
                if (p%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(p==1)
            { 
                printf("1 is neither the prime nor composite number");
            }
            else
            {
                if (flag==0)
                 {
                    printf("It is a prime number.");
                    break;	
                 }
                else
                 {
                    printf("It is not a prime number.");
                    break;	
                 }
            }
            
        case 3 : 
            printf("Enter the number to check whether it is even or odd : ");
            scanf("%d",&p);
            if (p%2==0)
             printf("%d is an even number.",p);
            else
                printf("%d is odd number.",p);
            break;
            
        case 4 :
        if(i==4)
        printf("OKAY BYE");
    }	
    return 0;
    
}
     

