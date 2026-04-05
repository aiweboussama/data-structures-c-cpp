#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int val;
    bool found = false;

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

    for (int i = 0; i < n; i++)
    {
        if (values[i] == val)
        {
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Value not found" << endl;
        return 0;
    }

    cout << "Positions = ";

    for (int i = 0; i < n; i++)
    {
        if (values[i] == val)
        {
            cout << i;

            if (i < n - 1)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (values[j] == val)
                    {
                        cout << " ";
                        break;
                    }
                }
            }
        }
    }

    cout << endl;

    return 0;
}
