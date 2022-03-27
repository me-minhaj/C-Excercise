// Find the result of a football game using goals as condition.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    /* code */
    int goal_of_barcelona,goal_of_realMadrid;

    printf("How many goal's Barcelona scored: ");
    scanf("%d", &goal_of_barcelona);

    printf("How many goal's Real Madrid scored: ");
    scanf("%d", &goal_of_realMadrid);

    if (goal_of_barcelona > goal_of_realMadrid)
    {
        /* code */
        printf("Barcelona won by %d goals!!!", goal_of_barcelona - goal_of_realMadrid);
    }
    else if (goal_of_barcelona < goal_of_realMadrid)
    {
        /* code */
        printf("Real madrid won by %d goals!!!", goal_of_realMadrid - goal_of_barcelona);
    }
    else
    {
        /* code */
        printf("No one won this match. And the match is draw.");
    }
    
    
    

    return 0;
}
