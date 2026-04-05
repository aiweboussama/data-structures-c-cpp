#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int values[100];
    int maximum;
    int minimum;
    long long sum = 0;
    double average;

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

    maximum = values[0];
    minimum = values[0];

    for (int i = 0; i < n; i++)
    {
        if (values[i] > maximum)
        {
            maximum = values[i];
        }

        if (values[i] < minimum)
        {
            minimum = values[i];
        }

        sum += values[i];
    }

    average = static_cast<double>(sum) / n;

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;
    cout << fixed << setprecision(2);
    cout << "Average = " << average << endl;

    return 0;
}
