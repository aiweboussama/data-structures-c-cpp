#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, b;
    float squareA, squareB;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    squareA = a * a;
    squareB = b * b;

    cout << fixed << setprecision(2);
    cout << "Square of a = " << squareA << endl;
    cout << "Square of b = " << squareB << endl;

    return 0;
}
