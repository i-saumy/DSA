
#include <stdio.h>
void convert(char lower_case)
{
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

