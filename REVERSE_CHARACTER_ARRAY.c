#include <stdio.h>

int l( char* link)

{
    	int count = 0;

	while (link[count] != 0) 
	{
	   count++;
	}
	return count;
}

void r( char* link)

{
    char c;
    int f,m,n;
    n= l(link);
    
     for (f = 0,m=n-1; f < m; f++,m--)
        
            {
            		c = link[m];
            		link[m] = link[f];
            		link[f] = c;
            }

}
int main()
{
	char link[100];
	printf("Enter a String: ");
	scanf("%s", link);

	printf("\nString Before Reverse: %s", link);
	r(link);
	
	printf("\nString After Reverse: %s", link);
}
