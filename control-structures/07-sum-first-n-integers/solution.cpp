#include <iostream>

using namespace std;

int main()
{
    int n;
    long long sum = 0;

    cout << "Enter a strictly positive integer: ";

    if (!(cin >> n) || n <= 0)
    {
        cout << "Invalid input. N must be a strictly positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
