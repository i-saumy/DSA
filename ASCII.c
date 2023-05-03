#include <stdio.h>

int main()
{
    char ch;
    printf("Please Enter a Character \n");
    scanf(" %c", &ch);
    if(ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117 || 
	ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85)
    {
    	printf("%c is a VOWEL.\n", ch);
    }
    else if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("%c is a CONSONANT.\n", ch);
    }
    else
    printf("%c is not an ALPHABET.\n", ch);

    return 0;
}

