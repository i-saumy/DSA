
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100],copied[100];
    printf("enter the name: ");
    scanf("%s",name);
    int x,y,vow=0;
    x=strlen(name);
    for(int i=0;i<x;i++)
    if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||
    name[i]=='u'||name[i]=='U'||name[i]=='O'||name[i]=='I'||name[i]=='E'||name[i]=='A'){
        vow++;
    }
    printf("number of vowels %d",vow);
    strcpy(copied,name);
    printf("\nthe copied string is %s",copied);
    printf("\nEnter how many spaces you want: ");
    scanf("%d",&y);
    for (int i = 0; i < x; i++) {
    copied[2*(i)+y] = name[i];
    if (i != x - 1)
        copied[2*i + 1] = ' ';
}
    printf("%s",copied);
    return 0;
}
