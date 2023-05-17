
#include <stdio.h>

int main()
{   
    int n,i,j;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    for(i=0; i < 5 ; i++)
    {
        for(j=0;j<n-1-i;j++)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("$");
        for(j=0;j<n-1-i;j++)
            printf(" ");
        for(j=0;j<n-1-i;j++)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("$");
            
        printf("\n");
    }

    return 0;
}


