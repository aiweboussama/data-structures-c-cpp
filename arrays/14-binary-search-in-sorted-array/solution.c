#include <stdio.h>

int main(void)
{
    int values[12];
    int val;
    int left = 0;
    int right = 11;
    int middle;
    int position = -1;
    int i;

    for (i = 0; i < 12; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &val);

    while (left <= right)
    {
        middle = (left + right) / 2;

        if (values[middle] == val)
        {
            position = middle;
            break;
        }
        else if (values[middle] < val)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

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
