
#include <stdio.h>

int main()
{   int po;
    printf("Press 1 if object is at infinity");
    printf("\nPress 2 if object is between infinity and 2F' ");
    printf("\nPress 3 if object is at 2F' ");
    printf("\nPress 4 if object is between 2F' and F' ");
    printf("\nPress 5 if object is at F' ");
    printf("\nPress 6 if object is between F' and P");
    scanf("%d",&po);
    if (po==1)
        printf("Position : At F \nSize : Extremely small \nNature : Real and Inverted");
    else if (po==2)
        printf("Position : Between F and 2F \nSize : Small \nNature : Real and Inverted");
    else if (po==3)
        printf("Position : At 2F \nSize : Same size \nNature : Real and Inverted");
    else if (po==4)
        printf("Position : Beyond 2F \nSize : Enlarged \nNature : Real and Inverted");
    else if (po==5)
        printf("Position : At infinity \nSize : Highly Enlarged \nSize : Real and Inverted");
    else if (po==6)
        printf("Position : Same side of Lens \nSize : Enlarged \nSize : Virtual and Erect");
     else
        printf("Invalid Entry");

    return 0;
}

