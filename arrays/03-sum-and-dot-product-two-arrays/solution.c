#include <stdio.h>

int main(void)
{
    int n;
    int array1[100];
    int array2[100];
    int sum_array[100];
    long long dot_product = 0;
    int i;

    printf("Enter the number of values: ");

    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
    {
        printf("Invalid input. N must be between 1 and 100.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter array 1 value %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter array 2 value %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum_array[i] = array1[i] + array2[i];
        dot_product += (long long)array1[i] * array2[i];
    }

    printf("Sum array = ");

    for (i = 0; i < n; i++)
    {
        printf("%d", sum_array[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");
    printf("Dot product = %lld\n", dot_product);

    return 0;
}
