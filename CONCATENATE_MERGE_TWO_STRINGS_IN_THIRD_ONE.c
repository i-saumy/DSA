#include <stdio.h>

int main()

        {
    
            char st[100], str[100], string[100];
            int c = 0;
            
            printf("Enter the first string\n");
            scanf("%s", st);
            
            printf("Enter the second string\n");
            scanf("%s", str);
            
            for (int i = 0; st[i] != 0; i++)
            
                {
                    
                    string[c] = st[i];
                    c++;
                    
                }
                
            for (int i = 0; str[i] != 0; i++)
            
                {
                    
                    string[c] = str[i];
                    c++;
                    
                }

            printf("The concatinated string is: %s", string);

}

