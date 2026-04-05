#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int v1;
    int v2;
    int count = 0;

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

    cout << "Enter v1: ";
    cin >> v1;

    cout << "Enter v2: ";
    cin >> v2;

    for (int i = 0; i < n - 1; i++)
    {
        if (values[i] == v1 && values[i + 1] == v2)
        {
            count++;
        }
    }

    cout << "Number of successions = " << count << endl;

    return 0;
}
