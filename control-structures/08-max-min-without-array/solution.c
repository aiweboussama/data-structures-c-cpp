#include <stdio.h>

int main(void)
{
    int n;
    int number;
    int maximum;
    int minimum;
    int i;

    printf("Enter the number of values: ");

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input. N must be a strictly positive integer.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &number);

    maximum = number;
    minimum = number;

    for (i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number > maximum)
        {
            maximum = number;
        }

        if (number < minimum)
        {
            minimum = number;
        }
    }

    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;
}
