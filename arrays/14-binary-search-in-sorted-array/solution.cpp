#include <iostream>

using namespace std;

int main()
{
    int values[12];
    int val;
    int left = 0;
    int right = 11;
    int middle;
    int position = -1;

    for (int i = 0; i < 12; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
    }

    cout << "Enter the value to search: ";
    cin >> val;

    while (left <= right)
    {
        middle = (left + right) / 2;

        if (values[middle] == val)
        {
            position = middle;
            break;
        }
        else if (values[middle] < val)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

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
