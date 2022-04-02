// Check Products Stock

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int stock,purchase_today,available;

    printf("Enter Stock Value: ");
    scanf("\n%d", &stock);

    printf("Enter Total Product Purchase Of Today: ");
    scanf("\n%d", &purchase_today);

    available = stock - purchase_today;

    if (available < 0)
    {
        /* code */
        printf("\nWe have to purchase %d products for delevery!!!", available);
    }
    else if (available == 0)
    {
        /* code */
        printf("We are out of stock, so we have to produce more products!!!");
    }
    
    else
    {
        /* code */
        printf("\nWe have %d products in stock!!!", available);
    }
    
     
    return 0;
}
