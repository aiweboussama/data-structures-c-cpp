#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int positive_count = 0;
    int has_non_zero = 0;
    long long product = 1;

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

    for (int i = 0; i < n; i++)
    {
        if (values[i] != 0)
        {
            product *= values[i];
            has_non_zero = 1;
        }

        if (values[i] > 0)
        {
            positive_count++;
        }
    }

    if (!has_non_zero)
    {
        product = 0;
    }

    cout << "Product = " << product << endl;
    cout << "Strictly positive count = " << positive_count << endl;

    return 0;
}
