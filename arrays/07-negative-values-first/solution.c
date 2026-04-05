#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int i;
    int j;
    int temp;

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
        i++;
    }

    i = 0;
    while (i < n && values[i] < 0)
    {
        i++;
    }

    j = i + 1;

    while (j < n)
    {
        if (values[j] < 0)
        {
            temp = values[i];
            values[i] = values[j];
            values[j] = temp;
            i++;
        }

        j++;
    }

    printf("Rearranged array = ");

    i = 0;
    while (i < n)
    {
        printf("%d", values[i]);

        if (i < n - 1)
        {
            printf(" ");
        }

        i++;
    }

    printf("\n");

    return 0;
}
