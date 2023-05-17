
#include<stdio.h>

int main()
{
	int a, b, c,small;
	
	printf("Enter three numbers\n");
	scanf("%d %d %d", &a, &b, &c);
	
	small = ((a < b) && (a < c)) ? (a) : ( (b < c) ? (b) : (c) ) ;
	 
	 printf("\n SMALLEST NUMBER : %d",small) ;
	 
}


