
#include <stdio.h>

int main() 
{
    float n1,n2;
    char i;
    printf("Enter (+, -, *, /): ");
    scanf("%c", &i);
    printf("Enter two numbers: ");
    scanf("%f %f",&n1,&n2);
    
    switch(i)
    {
        case '+':
         printf("The addition of these elements is= %f",n1+n2);
         
        break;
        
        case '-':
        printf("The subtraction of these elements is= %f",n1+n2);
        
        break;
        case '*':
        
        printf("The multiplication of these elements is= %f",n1*n2);
        break;
        
        case '/':
        printf("The division of these elements is= %f",n1/n2);
        
        break;
        
        default:("Something went wrong");
    }
    return 0;
}

