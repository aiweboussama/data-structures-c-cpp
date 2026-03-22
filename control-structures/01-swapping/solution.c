#include <stdio.h>

int main(void)
{
    int a, b;
    int firstA, firstB;
    int temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    firstA = a;
    firstB = b;

    temp = a;
    a = b;
    b = temp;

    printf("Using temporary variable:\n");
    printf("a = %d, b = %d\n", a, b);

    a = firstA;
    b = firstB;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Without temporary variable:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
