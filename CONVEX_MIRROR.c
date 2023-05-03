
#include <stdio.h>

int main()
{
     int po;
    printf("Press 1 if object is at infinity");
    printf("\nPress 2 if object is beyond center of curvature ");
    printf("\nPress 3 if object is at center of curvature");
    printf("\nPress 4 if object is between C and F ");
    printf("\nPress 5 if object is at F\n");
    printf("\nPress 6 if object is between P and F");
    scanf("%d",&po);
    if (po==1)
         printf("Position : At F\nSize : Highly diminished,point size \nNature : Real and Inverted");
    else if (po==2)
        printf("Position : Between F and C \nSize : diminished \nNature : Real and Inverted");
    else if (po==3)
        printf("Position : At C \nSize : Same size \nNature : Real and Inverted");
    else if (po==4)
        printf("Position : Beyond C \nSize : Enlarged \nNature : Real and Inverted");
    else if (po==5)
        printf("Position : At infinity \nSize : Highly Enlarged \nNature : Real and Inverted");
    else if (po==6)
        printf("Position : Behind the mirror \nSize : Enlarged \nNature : Virtual and erect");
    else
        printf("Invalid Entry");

    return 0;
}

