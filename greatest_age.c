#include <stdio.h>

int main(int argc, char const *argv[])
{
    int father,mother,uncle;
    printf("Enter Father Age: ");
    scanf("%d", &father);

    printf("\nEnter Mother Age: ");
    scanf("%d", &mother);

    printf("\nEnter Uncle Age: ");
    scanf("%d", &uncle);

    if (father > mother && father > uncle && mother < uncle)
    {
        /* code */
        // father: boro, uncle: middle, mother: choto
        printf("Your Father is the oldest person\nYour Mother is the youngest person\nAnd Your Uncles's age is between oldest and youngest age");
    }
    else if (father > mother && father < uncle && mother < uncle)
    {
        /* code */
        // father: middle, uncle: boro, mother: choto
        printf("Your Uncle is the oldest person\nYour Mother is the youngest person\nAnd Your Father's age is between oldest and youngest age");
    }
    else if (father < mother && father < uncle && mother < uncle)
    {
        /* code */
        // father: middle, uncle: boro, mother: choto
        printf("Your Uncle is the oldest person\nYour Father is the youngest person\nAnd Your Mother's age is between oldest and youngest age");
    }
    else if (father < mother && father < uncle && mother > uncle)
    {
        /* code */
        // father: choto, uncle: middle, mother: boro
        printf("Your Mother is the oldest person\nYour Father is the youngest person\nAnd Your Uncle's age is between oldest and youngest age");
    }
    else if (father < mother && father > uncle && mother > uncle)
    {
        /* code */
        // father: choto, uncle: middle, mother: boro
        printf("Your Mother is the oldest person\nYour Uncle is the youngest person\nAnd Your Father's age is between oldest and youngest age");
    }

    // done
    else if (father > mother && father > uncle && mother > uncle)
    {
        /* code */
        // father: boro, uncle: choto, mother: middle
        printf("Your Father is the oldest person\nYour Uncle is the youngest person\nAnd Your Mother's age is between oldest and youngest age");
    }

    else
    {
        /* code */
        printf("Everyone's age is similer!!!");
    }
    
    
    
    
    return 0;
}
