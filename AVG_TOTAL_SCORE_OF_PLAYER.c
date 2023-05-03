
#include <stdio.h>

int main()
{
    int score,sum_score=0,i=1;
    float avg_score;
    
    again:
    printf("\nEnter the score of next player no %d=",i);
    scanf("%d",&score);
    sum_score += score;
    i++;
    if(i<=11) goto again;
    
    avg_score = sum_score/11.0;
    printf("Total Score = %d and Average Score = %f ",sum_score,avg_score);

    return 0;
}

