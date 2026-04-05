#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int val;
    int i;
    int j;
    int temp;
    int position = -1;

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

    printf("Enter the value to search: ");
    scanf("%d", &val);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (values[j] > values[j + 1])
            {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (values[i] == val)
        {
            position = i;
            break;
        }
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

    if (position == -1)
    {
        printf("Value not found\n");
    }
    else
    {
        printf("Position = %d\n", position);
    }

    return 0;
}
