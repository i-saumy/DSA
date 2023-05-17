
#include <stdio.h>

int main()
{
    int matchsticks=21,user,computer;
    while(1)
    {
    printf("Number of matchsticks left %d:",matchsticks);
    printf("Pick 1 or 2 or 3 or 4 matchsticks\n");
    scanf("%d",&user);
    if(user>4 || user<1)
    continue;
    matchsticks = matchsticks - user;
    printf("Number of matchsticks left %d \n",matchsticks);
    computer = 5 - user;
    printf("Computer picked up %d matchsticks \n" ,computer);
    matchsticks = matchsticks - computer;
    if(matchsticks == 1)
    {
        printf("Number of matchsticks left %d:\n",matchsticks);
        printf(" You lost the game");
        break;
        
    }
}

    return 0;
}

