#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int j;
    int key;

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

    for (int i = 1; i < n; i++)
    {
        key = values[i];
        j = i - 1;

        while (j >= 0 && values[j] > key)
        {
            values[j + 1] = values[j];
            j--;
        }

        values[j + 1] = key;
    }

    cout << "Sorted array = ";

    for (int i = 0; i < n; i++)
    {
        cout << values[i];

        if (i < n - 1)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
