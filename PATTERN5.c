
#include <stdio.h>

int main()
{
    int i, j,m,n=1,o=4;  
    
      
    for (i = 0; i < 5; i++){
        for(m = 4;m>i;m--){
            printf(" ");        
        }
        for(j=1;j<=2*i+1;j++){
            printf("%d",n);
        }
       
        for(m = 4;m>i;m--){
            printf("  ");        
        }
        for(j=1;j<=2*i+1;j++){
            printf("%d",n);
        }
        n++;
        printf("\n");
    }
     for (i = 4; i > 0; i--){
        for(m = 4;m>=i;m--){
            printf(" ");        
        }
        for(j=2*i-1;j>=1;j--){
            printf("%d",o);
        }
       
        for(m = 4;m>=i;m--){
            printf("  ");        
        }
        for(j=2*i-1;j>=1;j--){
            printf("%d",o);
        }
        o--;
        printf("\n");
    }

    return 0;
}

