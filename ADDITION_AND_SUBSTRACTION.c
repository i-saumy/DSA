#include <stdio.h>

int main()
{   
    int a=2,b=2,ad,sub,div,multi;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    ad=a+b;
    printf("ADDITION=%d\n",ad);
    sub=a-b;
    printf("SUBSTRACTION=%d\n",sub);
    div=a/b;
    printf("DIVISION=%d\n",div);
    multi=a*b;
    printf("MULTIPLICATION=%d\n",multi);

    return 0;
}

