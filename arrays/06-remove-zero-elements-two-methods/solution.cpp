#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int method1[100];
    int method2[100];
    int size1;
    int size2;
    int i;
    int j;

    cout << "Enter the number of values: ";

    if (!(cin >> n) || n <= 0 || n > 100)
    {
        cout << "Invalid input. N must be between 1 and 100." << endl;
        return 1;
    }

    i = 0;
    while (i < n)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
        method1[i] = values[i];
        i++;
    }

    size1 = n;
    i = 0;

    while (i < size1)
    {
        if (method1[i] == 0)
        {
            j = i;

            while (j < size1 - 1)
            {
                method1[j] = method1[j + 1];
                j++;
            }

            size1--;
        }
        else
        {
            i++;
        }
    }

    size2 = 0;
    j = 0;

    while (j < n)
    {
        if (values[j] != 0)
        {
            method2[size2] = values[j];
            size2++;
        }

        j++;
    }

    cout << "Method 1 = ";

    if (size1 == 0)
    {
        cout << "Empty array";
    }
    else
    {
        i = 0;

        while (i < size1)
        {
            cout << method1[i];

            if (i < size1 - 1)
            {
                cout << " ";
            }

            i++;
        }
    }

    cout << endl;
    cout << "Method 2 = ";

    if (size2 == 0)
    {
        cout << "Empty array";
    }
    else
    {
        i = 0;

        while (i < size2)
        {
            cout << method2[i];

            if (i < size2 - 1)
            {
                cout << " ";
            }

            i++;
        }
    }

    cout << endl;

    return 0;
}
