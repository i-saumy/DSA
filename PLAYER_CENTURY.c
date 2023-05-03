
#include <stdio.h>

int main()
{
    int score, i=0,count=0;
    
    again:
    printf("\n Enter the score of next player no %d = ",i);
    scanf("%d",&score);
        if (score< 0) goto again;
    count += score/100;
    
    i++;
    if(i<10) goto again;
    
    printf("Total no, of players made century = %d",count);

    return 0;
}

