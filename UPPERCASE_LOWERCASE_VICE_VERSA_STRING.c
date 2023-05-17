#include <stdio.h>
#include <string.h>

int main()
{
    char st[100];
    
    printf("Enter a String: ");
    gets(st);
    
    printf("The original string is: %s\n", st);
    
    for (int i = 0; st[i] != 0; i++)
    
    {
        
    if (st[i] >= 'A' && st[i] <= 'Z')
    st[i] = st[i] + 32;
    
    else if (st[i] >= 'a' && st[i] <= 'z')
    
    st[i] = st[i] - 32;
    
    }
    
printf("The Converted string is %s\n", st);
return 0;
}

