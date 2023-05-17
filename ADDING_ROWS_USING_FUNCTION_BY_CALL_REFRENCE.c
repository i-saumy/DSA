
#include <stdio.h>
void addingROW(int (*pa)[3],int *pb)
{
    int i,j,x;
    for(i=0;i<2;i++)
    {
        pb[i]=0;
        for(j=0;j<3;j++)
            pb[i] = pb[i] + pa[i][j];
    }
        for(x=0;x<2;x++)
            printf("%d \n ",pb[x]);
}
int main()
{
   int a[2][3]={2,2,2,9,9,9},b[2]={0,0},x;
   addingROW(a,b);

    return 0;
}

