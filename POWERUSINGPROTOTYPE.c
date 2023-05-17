
#include <stdio.h>
#include <math.h>

void power();

int main()
{
    power();

    return 0;
}
void power()
{
    int n,k;
    int p;
    
    printf("\nEnter the numbers : ");
    scanf("%d%d",&n,&k);
    p=pow(n,k);
    printf("Value of n^k: %d",p);
}
