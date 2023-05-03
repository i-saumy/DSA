
#include <stdio.h>

int main()
{   int marks,age;
    printf("Marks=");
    scanf("%d",&marks);
    printf("\nAge=");
    scanf("%d",&age);
    
    marks=marks + 40;
    
    if(age< 50);
            marks=marks + 20;
    
    printf("\nFinal Marks=%d",marks);

    return 0;
}

