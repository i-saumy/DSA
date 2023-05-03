
#include <stdio.h>

int main()
{   int a,b,c,d,e,total,avg;
    printf("enter the marks of a subject");
    scanf("%d %d %d %d %d",&a ,&b ,&c ,&d ,&e);
    total=a+b+c+d+e;
    printf("total of the marks is %d\n",total);
    avg=(a+b+c+d+e)/5;
    printf("average of the marks %d",avg);

    return 0;
}

