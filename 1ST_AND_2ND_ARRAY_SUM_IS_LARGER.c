
#include <stdio.h>

int large_sum(int*a,int*b,int n)
{
    int i,s1=0,s2=0;
    for(i=0;i<n;i++)
{
    s1 += a[i];
    s2 += b[i];
}
    if (s1==s2)
        return 0;
    else if(s1>s2)
        return 1;
    else 
        return 2;
}

int main()
{
    int x[20],y[15],g;
    g= large_sum(x,y,10);
    
    if(!g)
        printf("BOTH SUMS ARE EQUAL");
    else if(g==1)
        printf("x IS GREATER THAN y");
    else
        printf("y IS GREATER THAN x");

    return 0;
}

