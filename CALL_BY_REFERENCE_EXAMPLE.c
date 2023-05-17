#include <stdio.h>

void add(int * x , int *y)
{
    int c; 
    c = *x + *y;
    printf("%d",c);
    // *x = *x + 20;
    //printf("%d",*x);
}

int main()
{
   int a = 5,b=10;
   add(&a,&b);
}

