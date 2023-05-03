
#include <stdio.h>

int main()
{   
    int a;
    printf("The value of a");
    scanf("%d",&a);
    if(a == 0)
        printf("The vehicle moves with constant velocity");
    else if(a > 0)
        printf("The vehicle moves with accelerated velocity");
    else
        printf("The vehicle moves with deccelerated velocity");

    return 0;
}


