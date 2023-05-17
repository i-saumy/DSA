
#include <stdio.h>
#include<math.h>

int main()
{
   int i,sqr;
    double x[10],y[10],x1,y1,dist,sum=0;
    
    printf("\n Enter the coordinates of 10 points in the form of (x,y) : ");
    for(i=0;i<10;i++)
    scanf("%lf %lf",&x[i],&y[i]);
    
    for(i=0;i<9;i++)
    {
        x1=pow((x[i+1]-x[i]),2);
        y1=pow((y[i+1]-y[i]),2);
        dist=sqrt(x1=y1);
        sum+=dist;
    }
    printf("\n Distance is = %lf \n ",sum);


    return 0;
}

