#include <stdio.h>

int main(void)
{
    int a, b, c;
    int firstA, firstB, firstC;
    int temp;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    firstA = a;
    firstB = b;
    firstC = c;

    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("Left rotation using temporary variable:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    a = firstA;
    b = firstB;
    c = firstC;

    temp = c;
    c = b;
    b = a;
    a = temp;

    printf("Right rotation using temporary variable:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    a = firstA;
    b = firstB;
    c = firstC;

    a = a + b + c;
    c = a - (b + c);
    b = a - (c + b);
    a = a - (b + c);

    printf("Left rotation without temporary variable:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    a = firstA;
    b = firstB;
    c = firstC;

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("Right rotation without temporary variable:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
