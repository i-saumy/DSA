
#include <stdio.h>

int main()
{
    int po;
    printf("Press 1 if object is at infinity");
     printf("\nPress 2 if object is between Infinity and P");
    scanf("%d",&po);
    if (po==1)
        printf("Position : At F \nSize : Extremely Small \nNature : Virtual and Erect");
    else if (po==2)
        printf("Position : Between F and P \nSize : Diminished \nNature : Real and Erect");
    else
        printf("Invalid Entry");
    return 0;
}

