
#include <stdio.h>

int main()
{
    int p,c,m;
    float s,l;
    printf("Please enter the marks of Physics Chemistry and Maths respectively:");
     scanf("%d %d %d",&p,&c,&m);
     s=p+c+m;
     l=(s/3);
     printf("The total marks secured is: %f",s);
     printf("\nThe average marks secured is: %f\n",l);
     
     if(l>100)
     
    printf("Not considered");
    
    else if(l>=90 && l<=100)
            printf("O");
    else if(l>=80 && l<90)
             printf("E");
     else if(l>=70 && l<80)
             printf("A");
      else 
             printf("F");
     return 0;
    
}
