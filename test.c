
#include <stdio.h>
#include <string.h>

void convert(char lower_case)
{
     char s[100];
       int l=0,
       
    printf("enter string: \n");
    gets(s);
    
    for(int i=0;s[i]!= 0;i++)
    
    {
         l++;
    }
     
    char uppercase;
    uppercase = lower_case-32;
    printf("uppercase : %c",uppercase);
}
int main()
{
   char lower_case;
   printf("Enter lower case char:");
   scanf("%c",&lower_case);
   convert(lower_case);

    return 0;
}

