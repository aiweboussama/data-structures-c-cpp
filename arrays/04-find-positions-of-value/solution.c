#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int val;
    int found = 0;
    int i;

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

    for (i = 0; i < n; i++)
    {
        if (values[i] == val)
        {
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Value not found\n");
        return 0;
    }

    printf("Positions = ");

    for (i = 0; i < n; i++)
    {
        if (values[i] == val)
        {
            printf("%d", i);

            if (i < n - 1)
            {
                int j;
                for (j = i + 1; j < n; j++)
                {
                    if (values[j] == val)
                    {
                        printf(" ");
                        break;
                    }
                }
            }
        }
    }

    printf("\n");

    return 0;
}
