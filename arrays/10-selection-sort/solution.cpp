#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int min_index;
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

    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[min_index])
            {
                min_index = j;
            }
        }

        temp = values[i];
        values[i] = values[min_index];
        values[min_index] = temp;
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
