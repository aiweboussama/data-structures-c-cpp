#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 100;

int main()
{
    int values[MAX_SIZE];
    int n;
    int maximum;
    int minimum;
    long long sum = 0;
    double average;

    cout << "Enter the number of elements: ";

    if (!(cin >> n) || n <= 0 || n > MAX_SIZE)
    {
        cout << "Invalid input. The number of elements must be between 1 and " << MAX_SIZE << "." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";

        if (!(cin >> values[i]))
        {
            cout << "Invalid input. Elements must be integers." << endl;
            return 1;
        }
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
