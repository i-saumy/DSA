
#include <stdio.h>


    struct book
    {
    char name[20];
    float price;
    int pages;
    };

int main()
{

struct book *ptr,b[5];
int i;
ptr=b;
for ( i = 0; i < 3; i++)
{
    printf("enter book name,price,pages");
    scanf("%s %f %d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->pages);
}
for ( i = 0; i < 3; i++)
{
    printf("\n%s %f %d",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
}
}



