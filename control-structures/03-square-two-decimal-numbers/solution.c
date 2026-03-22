#include <stdio.h>

int main(void)
{
    float a, b;
    float squareA, squareB;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    squareA = a * a;
    squareB = b * b;

    printf("Square of a = %.2f\n", squareA);
    printf("Square of b = %.2f\n", squareB);

    return 0;
}
