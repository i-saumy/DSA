#include <stdio.h>

int main()
{
    int n, reverse_Num = 0, remainder ,Original_Num=0;
 
    printf("Enter a number to get reverse number ");
    scanf("%d", &n);
    
    Original_Num=n;
    
    while(n != 0)
    {
        remainder = n%10;
        reverse_Num = reverse_Num*10 + remainder;
        n = n/10;
    }
 
    printf("Reversed Number of %d  = %d",Original_Num,reverse_Num);
    
}

