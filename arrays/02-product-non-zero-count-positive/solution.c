#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int positive_count = 0;
    int has_non_zero = 0;
    int i;
    long long product = 1;

    printf("Enter the number of values: ");

    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
    {
        printf("Invalid input. N must be between 1 and 100.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (values[i] != 0)
        {
            product *= values[i];
            has_non_zero = 1;
        }

        if (values[i] > 0)
        {
            positive_count++;
        }
    }

    if (!has_non_zero)
    {
        product = 0;
    }

    printf("Product = %lld\n", product);
    printf("Strictly positive count = %d\n", positive_count);

    return 0;
}
