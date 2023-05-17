
#include <stdio.h>

int main() 
{
    int a,b,i,g;
    
    printf("Enter the numbers you want to find the GCD for: ");
    scanf("%d %d",&a,&b);
    
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
          g=i;
    }
    printf("The GCD of the number %d and %d is= %d",a,b,g);
    
    return 0;
}

