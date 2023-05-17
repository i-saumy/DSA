
#include <stdio.h>

int main()
{   
    int a,k,std[4][5];
    printf("Enter the number");
    for(a=0;a<4;a++)
    {
        for(k=0;k<4;k++)
    {
        scanf("%d", &std[a][k]);
    }
    }
    printf ("Matrix form\n ");
    for(a=0;a<4;a++)
    {
        for(k=0;k<4;k++)
    {
        printf("%d ",std[a][k]);
    }
    
    printf("\n");
    }

    return 0;
}

