
#include <stdio.h>

int main()
{
    int i,item,m[20],pos=-1,n;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);;
    printf("\n Enter the number you want to find : ");
    scanf("%d",&item);
    
    for(i=0;i<n;i++)
    {
        printf("\n Enter data : ");
        scanf("%d",&m[i]);
    }
        for(i=0;i<n;i++)
    {
        if(item==m[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    printf("\nItem is not present");
    else
    printf("\nItem is present in position %d",pos);
    return 0;
}


