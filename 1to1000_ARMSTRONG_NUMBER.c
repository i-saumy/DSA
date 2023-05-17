#include <stdio.h>
#include<math.h>
int main()
{
    int t, a, b, c,i;
 
    printf("All Armstrong numbers between 1 and 1000 are:\n");
    for(int i=1;i<=1000;i++)  
    {
        if(i<=9)
        {
            printf("%d ",i);
        }
        else
        {
            a = i % 10;   
            b = (i % 100 - a) / 10;       
            c = (i % 1000 - b) /100; 
            t = pow(a,3) + pow(b,3) + pow(c,3); 
	
	if (t == i)
            {
                printf("%d ", t);
            }
        }
    }
    return 0;
}
