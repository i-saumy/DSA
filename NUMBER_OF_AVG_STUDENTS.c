
#include <stdio.h>

int main()
{   
    int total,count=0,i=1;
    float avg;
    repeat:
    printf("Enter Total Marks of Students %d = ",i);
    scanf("%d",&total);
    avg=(total +4.9)/4;
    if (avg>59)
        count++;
    i++;
    if (i<11) goto repeat;
    printf("\n No. of students above average= %d",count);

    return 0;
}

