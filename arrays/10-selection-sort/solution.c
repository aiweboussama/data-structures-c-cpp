#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int i;
    int j;
    int min_index;
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

    for (i = 0; i < n - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < n; j++)
        {
            if (values[j] < values[min_index])
            {
                min_index = j;
            }
        }

        temp = values[i];
        values[i] = values[min_index];
        values[min_index] = temp;
    }

    printf("Sorted array = ");

    for (i = 0; i < n; i++)
    {
        printf("%d", values[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
