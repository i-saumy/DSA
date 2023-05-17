
#include <stdio.h>
#include <string.h>

    int main()
    
        {
            
        char str[100],n;
        
        int i, count=0;
       
        printf("\nEnter a String : ");
        gets(str);
        
        printf("\n Enter the character: ");
        scanf("%c", &n);
        
        for(i = 0; i <= strlen(str); i++)
        
            {
            if(str[i] == n)
            {
                count++;
            }
        }
            printf("\n Total occurence of '%c' is = %d ",n,count);
            return 0;
}
