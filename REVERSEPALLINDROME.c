#include <stdio.h>

int main()
{
  long int n,reverse_n=0,original_n;
  printf("Enter the Number");
  scanf("%ld",&n);
  original_n=n;
  do
  reverse_n = reverse_n*10 + n % 10;
  
  while(n=n/10);
  printf("\n The reverse Number is %ld:",reverse_n);
  if(original_n==reverse_n)
    printf("\n Given Number is a palindrome");
   else
    printf("\n Given Number is Not a palindrome");

    return 0;
}

