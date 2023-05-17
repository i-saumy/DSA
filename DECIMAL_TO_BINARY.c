#include <stdio.h>

int main()
{
    int num,bin=0,rmain,place=1;
    
    printf("Enter a number:");
    scanf("%d",&num);
    
    while(num)
    {
        rmain = num%2;
        num = num/2;
        bin = bin + (rmain * place);
        place = place * 10;
    
    }
    
    printf("Binary number is : %d",bin);

    return 0;
}

