
#include <stdio.h>
#include <string.h>

int main()
{
   int i=0,a=-2,j;
   char string1[100],string2[100];
   printf("Enter the first string");
   scanf("%s",string1);
   printf("Enter the second string");
   scanf("%s",string2);
   j=strlen(string1);
   while(j--)
    if (string1[i] != string2[i++])
    {
        a=1;
        break;
    }
    else
    a=-1;
    if(a==-1)
    printf("Both the strings are equal");
    else
    printf("Not equal");
   

    return 0;
}

