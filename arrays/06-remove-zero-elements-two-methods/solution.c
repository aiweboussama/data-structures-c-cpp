#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int method1[100];
    int method2[100];
    int size1;
    int size2;
    int i;
    int j;

    printf("Enter the number of values: ");

    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
    {
        printf("Invalid input. N must be between 1 and 100.\n");
        return 1;
    }

    i = 0;
    while (i < n)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
        method1[i] = values[i];
        i++;
    }

    size1 = n;
    i = 0;

    while (i < size1)
    {
        if (method1[i] == 0)
        {
            j = i;

            while (j < size1 - 1)
            {
                method1[j] = method1[j + 1];
                j++;
            }

            size1--;
        }
        else
        {
            i++;
        }
    }

    size2 = 0;
    j = 0;

    while (j < n)
    {
        if (values[j] != 0)
        {
            method2[size2] = values[j];
            size2++;
        }

        j++;
    }

    printf("Method 1 = ");

    if (size1 == 0)
    {
        printf("Empty array");
    }
    else
    {
        i = 0;

        while (i < size1)
        {
            printf("%d", method1[i]);

            if (i < size1 - 1)
            {
                printf(" ");
            }

            i++;
        }
    }

    printf("\n");
    printf("Method 2 = ");

    if (size2 == 0)
    {
        printf("Empty array");
    }
    else
    {
        i = 0;

        while (i < size2)
        {
            printf("%d", method2[i]);

            if (i < size2 - 1)
            {
                printf(" ");
            }

            i++;
        }
    }

    printf("\n");

    return 0;
}
