#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int values[MAX_SIZE];
    int n;
    int maximum;
    int minimum;
    long long sum = 0;
    int i;
    double average;

    printf("Enter the number of elements: ");

    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE)
    {
        printf("Invalid input. The number of elements must be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);

        if (scanf("%d", &values[i]) != 1)
        {
            printf("Invalid input. Elements must be integers.\n");
            return 1;
        }
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
