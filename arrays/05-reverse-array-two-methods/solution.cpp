#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int reversed[100];
    int temp;

    cout << "Enter the number of values: ";

    if (!(cin >> n) || n <= 0 || n > 100)
    {
        cout << "Invalid input. N must be between 1 and 100." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
    }

    for (int i = 0; i < n; i++)
    {
        reversed[i] = values[n - 1 - i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        temp = values[i];
        values[i] = values[n - 1 - i];
        values[n - 1 - i] = temp;
    }

    cout << "Method 1 = ";

    for (int i = 0; i < n; i++)
    {
        cout << values[i];

        if (i < n - 1)
        {
            cout << " ";
        }
    }

    cout << endl;
    cout << "Method 2 = ";

    for (int i = 0; i < n; i++)
    {
        cout << reversed[i];

        if (i < n - 1)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
