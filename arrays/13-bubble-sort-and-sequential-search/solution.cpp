#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int val;
    int temp;
    int position = -1;

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

    cout << "Enter the value to search: ";
    cin >> val;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (values[j] > values[j + 1])
            {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (values[i] == val)
        {
            position = i;
            break;
        }
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

    if (position == -1)
    {
        cout << "Value not found" << endl;
    }
    else
    {
        cout << "Position = " << position << endl;
    }

    return 0;
}
