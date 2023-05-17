
#include<stdio.h>

struct info
{
    int dd;
    int mm;
    int yy;
};
struct saumy
{
    char name[20];
    int age;
    char sex;
    struct info dob;
};

int main()
{
    struct saumy s[10];
   
    for(int i=0;i<10;i++)
    {
        printf("Enter name, age and sex: ");
        scanf("%s %d %c",s[i].name,&s[i].age,&s[i].sex);
        printf("Enter Date of Birth: ");
        scanf("%d/%d/%d",&s[i].dob.dd,&s[i].dob.mm,&s[i].dob.yy);
        printf("\n");
    }
    printf("\n");
    printf("Sl.no.\t Name\t Age\t DOB(DD/MM/YY)\n");
    for(int i=0;i<10;i++)
    {
        if(s[i].sex=='F')
        {
            printf("%d\t %s\t %d\t %d/%d/%d",i+1,s[i].name,s[i].age,s[i].dob.dd,s[i].dob.mm,s[i].dob.yy);
        }
        printf("\n");
    }
    return 0;
}
