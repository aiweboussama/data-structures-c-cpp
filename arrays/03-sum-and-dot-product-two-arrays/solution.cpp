#include <iostream>

using namespace std;

int main()
{
    int n;
    int array1[100];
    int array2[100];
    int sum_array[100];
    long long dot_product = 0;

    cout << "Enter the number of values: ";

    if (!(cin >> n) || n <= 0 || n > 100)
    {
        cout << "Invalid input. N must be between 1 and 100." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter array 1 value " << i + 1 << ": ";
        cin >> array1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter array 2 value " << i + 1 << ": ";
        cin >> array2[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum_array[i] = array1[i] + array2[i];
        dot_product += static_cast<long long>(array1[i]) * array2[i];
    }

    cout << "Sum array = ";

    for (int i = 0; i < n; i++)
    {
        cout << sum_array[i];

        if (i < n - 1)
        {
            cout << " ";
        }
    }

    cout << endl;
    cout << "Dot product = " << dot_product << endl;

    return 0;
}
