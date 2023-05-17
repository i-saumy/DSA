
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void main(){
    system("cls"); 
    int *p;
    int n; 
    printf("Enter size of array : "); 
    scanf("%d",&n); 
    p=(int*) malloc(sizeof(int)*n);
    printf("Enter elements for Array : "); 
    for(int i=0;i<n;i++) 
        scanf("%d",&p[i]); 

    printf("\nArray elements : "); 
    for(int i=0;i<n;i++) 
        printf("%d ",p[i]);
    
    int smallest= INT_MAX, largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(p[i]>largest)
            largest=p[i];

        if(p[i]<smallest)
            smallest=p[i];
    }
    printf("\nSmallest value in array : %d\n",smallest); 
    printf("Largest value in array : %d\n",largest); 
}

