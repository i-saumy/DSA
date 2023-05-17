# include <stdio.h>

int main()

{
    
    char s[100];
    int l=0, f=1,i;
    
    printf("Enter string:\n");
    scanf("%s",s);
    
    for(i=0;s[i]!= 0;i++)
    
    {
         l++;
    }
    
    for(i=0; i< l/2;i++)
    
    {
        if( s[i] != s[l-1-i] )
    {
        f=0;
        break;
    }
    }
    
    if(f==1)
    {
        
    printf("PALINDROME");
    
    }
    else
    {
        
    printf("NOT PALINDROME");
    
    }
    
return 0;

}

