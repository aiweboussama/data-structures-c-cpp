#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int temp;
    int smallestNumber, largestNumber;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

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

    cout << "Smallest number = " << smallestNumber << endl;
    cout << "Largest number = " << largestNumber << endl;

    return 0;
}
