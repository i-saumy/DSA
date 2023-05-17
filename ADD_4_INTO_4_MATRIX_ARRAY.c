
#include <stdio.h>

int main()
{
    int a[4][4],b[4][4],i,j;
    printf("First matrix\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        scanf("%d",&a[i][j]);
        printf("\n");
    }
    printf("Second Matrix\n");
    for(i=0;i<=3;i++)
    {
         for(j=0;j<=3;j++)
        scanf("%d",&b[i][j]);
        printf("\n");
    }
    printf("\nSum of Matrix = \n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        printf("%d ",a[i][j]+b[i][j]);
        printf("\n");
    }


    return 0;
}

