
#include <stdio.h>

int main()
{
     int po;
    printf("Press 1 if object is at infinity");
    printf("\nPress 2 if object is beyond center of curvature ");
    printf("\nPress 3 if object is at center of curvature");
    printf("\nPress 4 if object is between C and F ");
    printf("\nPress 5 if object is at F\n");
    scanf("%d",&po);
    if (po==1)
        printf("Position : Infinity\nSize : Highly diminished\nNature : Real and Inverted");
    else if (po==2)
        printf("Position : Beyond C\nSize : Diminished\nNature : Real and Inverted");
     else if (po==3)
        printf("Position : At C \nSize : Same size\nNature : Real and Inverted");
    else if (po==4)
        printf("Position : Between C and F\nSize : Enlarged\nNature : Real and Inverted");
    else if (po==5)
        printf("Position : At F\nSize : Highly Enlarged\nNatur : Real and Inverted");
    else
        printf("Invalid Entry");

    return 0;
}

