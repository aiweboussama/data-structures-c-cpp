#include <iostream>

using namespace std;

int main()
{
    int n;
    int number;
    int maximum;
    int minimum;

    cout << "Enter the number of values: ";

    if (!(cin >> n) || n <= 0)
    {
        cout << "Invalid input. N must be a strictly positive integer." << endl;
        return 1;
    }

    cout << "Enter number 1: ";
    cin >> number;

    maximum = number;
    minimum = number;

    for (int i = 2; i <= n; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> number;

        if (number > maximum)
        {
            maximum = number;
        }

        if (number < minimum)
        {
            minimum = number;
        }
    }

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;

    return 0;
}
