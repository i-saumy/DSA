
#include <stdio.h>

int main()
{   float bs,gs;
    printf("The basic salary is");
    scanf("%f",&bs);
    if(bs< 1500)
        gs=bs+bs*10/100+bs*40/100;
    else
        gs=bs+500+bs*50/100;
    printf("Gross salary is %f$",gs);    

            

    return 0;
}


