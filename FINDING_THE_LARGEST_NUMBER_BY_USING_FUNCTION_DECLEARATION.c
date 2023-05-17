
#include <stdio.h>
int max(int n)
{
    int next_num,largest=0,i;
    for(i=0;i<5;i++)
{
    printf("Enter the next number:");
    scanf("%d",&next_num);
    if(next_num > largest)
            largest=next_num;
}
    return(largest);
}

int main()

{
    int a;
    a=max(5);
    printf("max is %d\n",a);
    printf("max is %d",max(10));
    
    return 0;
}

