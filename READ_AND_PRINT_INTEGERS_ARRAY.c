
#include <stdio.h>

int main() 
{
  int values[5];

  printf("Enter integers: ");

    for(int i = 0; i < 5; ++i) 
    {
     scanf("%d", &values[i]);
    }

  printf("Display integers: ");

      for(int i = 0; i < 5; ++i) 
    {
     printf("%d\n", values[i]);
    }
  return 0;
}
