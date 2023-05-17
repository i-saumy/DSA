
#include <stdio.h>
#include <string.h>

int main()
{
    char b[100],ch,i=0,count=0;
    
    printf("Enter a character to find its frequency : ");
    scanf("%c",&ch);
    printf("Enter a string:");
    scanf("%s",b);
    
    
    while(b[i])
        if (ch == b[i++])
        ++count;
        
    printf("Frequency of %c = %d",ch,count);

    return 0;
}

