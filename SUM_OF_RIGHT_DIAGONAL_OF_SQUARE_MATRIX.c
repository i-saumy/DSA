
#include <stdio.h>

int main()
{
    int i,j,std[50][50],sum=0,n;
	 
       printf("\n\nFind sum of right diagonals of a matrix :\n");
	 
	 printf("Input the size of the square matrix : ");
     scanf("%d", &n); 
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&std[i][j]);
			   if (i==j) 
			   sum= sum+std[i][j];
            }
        }  
        
        printf("The matrix is :\n");
	    for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",std[i][j]);
	    printf("\n");
	 }
 
       printf("Addition of the right Diagonal elements is :%d\n",sum);
    

    return 0;
}

