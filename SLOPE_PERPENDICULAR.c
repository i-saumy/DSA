
#include <stdio.h>

int main()
{   
    
    int x1,x2,y1,y2,p1,p2,q1,q2,m1,m2,t;
    printf("Enter the value of x1 and y1");
    scanf("%d%d",&x1,&y1);
    printf("Enter the value of x2 and y2");
    scanf("%d%d",&x2,&y2);
    printf("Enter the value p1 and q1");
    scanf("%d%d",&p1,&q1);
    printf("Enter the value of p2 and q2");
    scanf("%d%d",&p2,&q2);
    m1=(y2-y1)/(x2-x1);
    m2 =(q2-q1)/(p2-p1);
    t= m1*m2== -1;
    printf("%d",t);
    return 0;
}



