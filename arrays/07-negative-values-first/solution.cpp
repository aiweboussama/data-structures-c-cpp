#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int i;
    int j;
    int temp;

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
        i++;
    }

    i = 0;
    while (i < n && values[i] < 0)
    {
        i++;
    }

    j = i + 1;

    while (j < n)
    {
        if (values[j] < 0)
        {
            temp = values[i];
            values[i] = values[j];
            values[j] = temp;
            i++;
        }

        j++;
    }

    cout << "Rearranged array = ";

    i = 0;
    while (i < n)
    {
        cout << values[i];

        if (i < n - 1)
        {
            cout << " ";
        }

        i++;
    }

    cout << endl;

    return 0;
}
