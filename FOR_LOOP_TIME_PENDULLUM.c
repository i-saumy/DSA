#include <stdio.h>
#include <math.h>
int main()
{   int l,g=10,pi=3.14;
    float t;
    printf("Length\t\tTime Period");
    for(l = 10; l <= 50; l = l+10)
    {
        t = 2*pi*sqrt(l/g);
        printf("\n%d \t\t%f",l,t);
    }

    return 0;
}

