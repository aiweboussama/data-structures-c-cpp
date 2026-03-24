#include <stdio.h>

int main(void)
{
    int copies;
    double totalPrice = 0.0;

    printf("Enter the number of copies: ");
    scanf("%d", &copies);

    if (copies <= 10)
    {
        totalPrice = copies * 2.0;
    }
    else if (copies <= 30)
    {
        totalPrice = 10 * 2.0 + (copies - 10) * 1.5;
    }
    else
    {
        totalPrice = 10 * 2.0 + 20 * 1.5 + (copies - 30);
    }

    printf("Total price = %.2f DA\n", totalPrice);

    return 0;
}
