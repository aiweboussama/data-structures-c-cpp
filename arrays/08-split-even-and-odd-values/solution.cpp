#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int t1[100];
    int t2[100];
    int size1 = 0;
    int size2 = 0;

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

        if (values[i] % 2 == 0)
        {
            t1[size1] = values[i];
            size1++;
        }
        else
        {
            t2[size2] = values[i];
            size2++;
        }
    }

    cout << "T1 = ";

    if (size1 == 0)
    {
        cout << "Empty array";
    }
    else
    {
        for (int i = 0; i < size1; i++)
        {
            cout << t1[i];

            if (i < size1 - 1)
            {
                cout << " ";
            }
        }
    }

    cout << endl;
    cout << "T2 = ";

    if (size2 == 0)
    {
        cout << "Empty array";
    }
    else
    {
        for (int i = 0; i < size2; i++)
        {
            cout << t2[i];

            if (i < size2 - 1)
            {
                cout << " ";
            }
        }
    }

    cout << endl;

    return 0;
}
