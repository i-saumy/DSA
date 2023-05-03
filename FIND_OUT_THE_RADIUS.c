
#include <stdio.h>

int main()
{   float radius,area,peri;
    printf("Enter radius");
    scanf("%f",&radius);
    area=3.14f*radius*radius;
    peri=2*3.14f*radius;
    printf("\nArea=%f\nPerimeter=%f\n",area,peri);
    

    return 0;
}

