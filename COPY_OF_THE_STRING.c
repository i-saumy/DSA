
#include <stdio.h>

int main()
{
    char i=0,src[100],dst[100];
    
    printf("Enter the source string : ");
    scanf("%s",src);
    
    while(src[i] != '\0')
     {
         dst[i] = src[i];
         i++;
     }
        
    dst[i] = '\0';
    
    printf("\n Destination String : %s",dst);
        
    return 0;
}

