
#include <stdio.h>

void area ();

int main()
{
    area();

    return 0;
}
void area()
{
    float area_circle;
    float rad;
    
    printf("\nEnter the radius :");
    scanf("%f",&rad);
    area_circle = 3.14*rad*rad;
    printf("Area of circle = %f",area_circle);
}
