#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int reversed[100];
    int i;
    int temp;

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
        reversed[i] = values[n - 1 - i];
    }

    for (i = 0; i < n / 2; i++)
    {
        temp = values[i];
        values[i] = values[n - 1 - i];
        values[n - 1 - i] = temp;
    }

    printf("Method 1 = ");

    for (i = 0; i < n; i++)
    {
        printf("%d", values[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");
    printf("Method 2 = ");

    for (i = 0; i < n; i++)
    {
        printf("%d", reversed[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
