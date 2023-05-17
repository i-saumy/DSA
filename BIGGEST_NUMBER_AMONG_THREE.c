
#include <stdio.h>
 
int main()
{
    int a, b, c, BIG;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    BIG = (a > b  && a > c ) ? (a) : ( (b > c) ? (b) : (c) ) ; 
 
    printf("\n BIGGEST NUMBER : %d", BIG) ;
}
