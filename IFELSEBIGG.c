
#include <stdio.h>

int main()
{
    int number=0;int sum=0;int count=0;int count_even=0;int count_odd=0;int count_inv=0;int count_neg=0;int count_1d=0;int count_2d=0;int count_3d=0;
    while(sum<=100)
    {
        printf("Enter an integer:");
        scanf("%d",&number);
        if(number>100 || number<0)
        {
            printf("Invalid data\n");
            count_inv++;
            
            if(number<0)
            {
                count_neg++;
            }
            else
            {
                count_3d++;
            }
        }
        else
        {
            sum += number;
            count++;
            
            if(number<10)
            {
                count_1d++;
            }
            else
            {
                count_2d++;
            }
            if(number%2==0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
        }
    }
    printf("The number of integers entered is %d\n",count);
    printf("The number of even integers entered is %d\n",count_even);
    printf("The number of odd integers entered is %d\n",count_odd);
    printf("The number of times invalid data has been entered is %d\n",count_inv);
    printf("The number of times invalid data less than 0 has been entered is %d\n",count_neg);
    printf("The number of times invalid data more than 100 has been entered is %d\n",count_3d);
    printf("The number of times single digit integers entered is %d\n",count_1d);
    printf("The number of times double digit integers entered is %d\n",count_2d);
    
     
     
     
    return 0;
}

