#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int firstA, firstB;
    int temp;

    cout << "Enter two integers:\n ";
    cin >> a >> b;

    firstA = a;
    firstB = b;

    temp = a;
    a = b;
    b = temp;

    cout << "Using temporary variable:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = firstA;
    b = firstB;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Without temporary variable:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
