#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int maximum;
    int minimum;
    int i;
    long long sum = 0;
    double average;

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

    maximum = values[0];
    minimum = values[0];

    for (i = 0; i < n; i++)
    {
        if (values[i] > maximum)
        {
            maximum = values[i];
        }

        if (values[i] < minimum)
        {
            minimum = values[i];
        }

        sum += values[i];
    }

    average = (double)sum / n;

    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);
    printf("Average = %.2f\n", average);

    return 0;
}
