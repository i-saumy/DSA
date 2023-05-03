
#include <stdio.h>

int main()
{   int a,b,c,t;
    printf("Enter the value of 1st side A is");
    scanf("%d",&a);
    printf("Enter the value of 2nd side B is");
    scanf("%d",&b);
    printf("Enter the value of 3rd side C is");
    scanf("%d",&c);
    t=(a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a);
    printf("%d",t);
    return 0;
}


