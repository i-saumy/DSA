
#include <stdio.h>

int main()
{   float x1,x2,y1,y2,m;
    printf("enter the one point x1 and y1:");
    scanf("%f%f",&x1,&y1);
    printf("\nenter the second  point x2 and y2:");
    scanf("%f%f",&x2,&y2);
    m= (y2-y1)/(x2-x1);
    printf("the slope is %f",m);
    return 0;
}


