#include <stdio.h>


int main()
{ int n,temp, rev=0;
    printf("Enter number to print in word:");
    scanf("%d",&n);
    
    temp=n;
    
    while(n!=0)
    {
       rev=(rev*10) + n%10;
        n=n/10;
        }
    while(rev!=0)
    {
        switch(rev%10)
        {
            case 0:
            printf("Zero ");
            break;
                        case 1:
            printf("One ");
            break;
                        case 2:
            printf("Two ");
            break;
                        case 3:
            printf("Three ");
            break;
                        case 4:
            printf("Four ");
            break;
                        case 5:
            printf("Five ");
            break;
                        case 6:
            printf("Six ");
            break;
                        case 7:
            printf("Seven ");
            break;
                        case 8:
            printf("Eight ");
            break;
                        case 9:
            printf("Nine ");
            break;
        }
        
        rev=rev/10;
        
    }  
      while(temp%10==0)
      {
          
        printf(" Zero");
        temp=temp/10;
    }
   
    return 0;
}
