#include <stdio.h>
#include <string.h>

void main()
{
    char str[100],substr[50];
    int a,b,i,j;
    
     printf("Enter the String: ");
     gets(str);
     
     printf("Enter the Sub String: ");
     gets(substr);
     
     a=strlen(str);
     b=strlen(substr);
     
        for(i=0;i<a;i++)
        
        {
            
         for(j=0;j<b;j++)
         
         {
             
         if(str[i+j]!=substr[j])
         
         break;
         
          }
          
          if(j==b)
          
          {
              printf("Sub String found at %d position",i+1);
             return 0;
          }
 }
    printf("Sub String not found");
}
