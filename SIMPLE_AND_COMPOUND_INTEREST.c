
#include<stdio.h>
#include<math.h>

int main() 
{
	float p,r,t,CI,SI,a;
	printf("Enter Principle, rate and time\n");
	scanf("%f%f%f",&p,&r,&t);

    SI=p*r*t/100; 

	a = p*pow((1+r/100),t);  
	CI = a-p;
 
  printf("Simple Interest is : %f",SI);
	printf("\n Compound Interest is : %f\n", CI);
  return 0;
}

