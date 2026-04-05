#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int t1[100];
    int t2[100];
    int size1 = 0;
    int size2 = 0;
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

        if (values[i] % 2 == 0)
        {
            t1[size1] = values[i];
            size1++;
        }
        else
        {
            t2[size2] = values[i];
            size2++;
        }
    }

    printf("T1 = ");

    if (size1 == 0)
    {
        printf("Empty array");
    }
    else
    {
        for (i = 0; i < size1; i++)
        {
            printf("%d", t1[i]);

            if (i < size1 - 1)
            {
                printf(" ");
            }
        }
    }

    printf("\n");
    printf("T2 = ");

    if (size2 == 0)
    {
        printf("Empty array");
    }
    else
    {
        for (i = 0; i < size2; i++)
        {
            printf("%d", t2[i]);

            if (i < size2 - 1)
            {
                printf(" ");
            }
        }
    }

    printf("\n");

    return 0;
}
