#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int v1;
    int v2;
    int count = 0;
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

    printf("Enter v1: ");
    scanf("%d", &v1);

    printf("Enter v2: ");
    scanf("%d", &v2);

    for (i = 0; i < n - 1; i++)
    {
        if (values[i] == v1 && values[i + 1] == v2)
        {
            count++;
        }
    }

    printf("Number of successions = %d\n", count);

    return 0;
}
