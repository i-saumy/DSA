
#include <stdio.h>
int main()
{
    float rc,ls,lr,br,ac,pc,as,ps,ar,pr;
    
       printf("Input the radius of the circe:");
            scanf("%f",&rc);
            
       printf("Input the length of the square:");
            scanf("%f",&ls);
            
       printf("Input the length of the rectangle:");
            scanf("%f",&lr);
            
       printf("Input the breadth of the rectangle:");
            scanf("%f",&br);
            
         ac=3.14*rc*rc;
         pc=2*3.14*rc;
         as=ls*ls;
         ps=ls*4;
         ar=lr*br;
         pr=(2*lr)+(2*br);
         
       printf("Area and Perimeter of the Circle are :%.2f & %.2f",ac,pc);
       
       printf("\nArea and Perimeter of the Square are :%.2f & %.2f",as,ps);
       
       printf("\nArea and Perimeter of the Rectangle are :%.2f & %.2f",ar,pr);
       
    return 0;
}
