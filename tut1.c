// print a multiplication table of a number entered by the user in pretty form

#include <stdio.h>

int main()
{
    int n;
    printf("Enter The Number You Want The Multiplication Table Of: \n");
    scanf("%d", &n);

    printf("Multiplication Number of %d is follows: \n", n);

    printf("\n%d x 1 = %d",n,n*1);
    printf("\n%d x 2 = %d",n,n*2);
    printf("\n%d x 3 = %d",n,n*3);
    printf("\n%d x 4 = %d",n,n*4);
    printf("\n%d x 5 = %d",n,n*5);
    printf("\n%d x 6 = %d",n,n*6);
    printf("\n%d x 7 = %d",n,n*7);
    printf("\n%d x 8 = %d",n,n*8);
    printf("\n%d x 9 = %d",n,n*9);
    printf("\n%d x 10 = %d",n,n*10);

    return 0;
}
