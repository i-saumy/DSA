
#include <stdio.h>

int main()
{   float P,Q,R,S;
    printf("The value of P,Q,R,S are");
    scanf("%f%f%f%f",&P,&Q,&R,&S);
    
    if(P*S == R*Q)
        {
         printf("\n The bridge is balanced");
         return(0);
        }
        printf("\n The bridge is not balanced");
        S = R*Q/P;
        printf("\nChoose S=%f to balance the bridge",S);
        return 0;
}


