#include <stdio.h>

int main()

{
    
    char str[150];
    
    int i, vowels, consonants, digits,symbols;
    
    vowels = 0; consonants = 0; digits = 0; symbols = 0;
    
     scanf("%s",str);
   
    for(i=0; str[i]!=0; i++)
    
{
    
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')

        {
            
        vowels++;
        
        }

                    else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))

        {
            
        consonants++;
        
        }

                    else if(str[i]>='0' && str[i]<='9')

        {
            
        digits++;
        
        }

                    else

        {
            
        symbols++;
        
        }
        
        }

                printf("Vowels: %d",vowels);
                
                printf("\nConsonants: %d",consonants);
                
                printf("\nDigits: %d",digits);
                
                printf("\nSymbols: %d", symbols);
                
return 0;

}
