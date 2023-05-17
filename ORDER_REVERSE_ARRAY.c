
#include <stdio.h>

int main()
{
   
    int a[100], b[100], i, j,n;
     printf("\nEnter the number of elements : ");
    scanf("%d",&n);

    printf("Enter integer numbers\n");
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n\nCopying elements from array a to b, in reverse order\n");
    for(i = n - 1, j = 0; i >= 0; i--, j++)
        b[j] = a[i];

    printf("\nOriginal(a[%d])   Copy(b[%d])\n", 5, 5);
    for(i = 0; i < n; i++)
    
        printf("%d  %d\n", a[i], b[i]);
    return 0;
}


