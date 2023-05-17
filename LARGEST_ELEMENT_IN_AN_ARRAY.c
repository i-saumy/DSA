
#include<stdio.h>
 
 int LarNo(int [], int) ;
 
 int main()
 
 {
     
 int n, i;
 
 printf("Enter the size of array :");
 scanf("%d",&n);
 
 int a[n] ;
 
 printf("Enter the elements:\n");
 
 for( i=0 ; i<n; i++ )
 
    scanf("%d",&a[i]) ;

    printf("The largest no. in the array is: %d", LarNo(a,n));
 
 return 0;

 }
 
int LarNo(int x[], int m)

{
    int i, le=0;

for( i=0; i<m; i++ )

if( le < x[i] )

le= x[i] ;

return le;

}


