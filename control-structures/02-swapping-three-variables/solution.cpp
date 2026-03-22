#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int firstA, firstB, firstC;
    int temp;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    firstA = a;
    firstB = b;
    firstC = c;

    temp = a;
    a = b;
    b = c;
    c = temp;

    cout << "Left rotation using temporary variable:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    a = firstA;
    b = firstB;
    c = firstC;

    temp = c;
    c = b;
    b = a;
    a = temp;

    cout << "Right rotation using temporary variable:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    a = firstA;
    b = firstB;
    c = firstC;

    a = a + b + c;
    c = a - (b + c);
    b = a - (c + b);
    a = a - (b + c);

    cout << "Left rotation without temporary variable:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    a = firstA;
    b = firstB;
    c = firstC;

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    cout << "Right rotation without temporary variable:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}
