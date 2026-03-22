#include <stdio.h>

int main(void)
{
    int a, b, c;
    int temp;
    int smallestNumber, largestNumber;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    smallestNumber = a * 100 + b * 10 + c;
    largestNumber = c * 100 + b * 10 + a;

    printf("Smallest number = %d\n", smallestNumber);
    printf("Largest number = %d\n", largestNumber);

    return 0;
}
