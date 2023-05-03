
#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("Enter three sides");
    scanf("%d%d%d",&a,&b,&c);
    
    if ((a + b > c) && (b + c > a) && (c + a > b))
        printf("Sides of a Triangle");
    else 
        printf("Not sides of a Triangle");

    return 0;
}

