#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int copies;
    double totalPrice = 0.0;

    cout << "Enter the number of copies: ";
    cin >> copies;

    if (copies <= 10)
    {
        totalPrice = copies * 2.0;
    }
    else if (copies <= 30)
    {
        totalPrice = 10 * 2.0 + (copies - 10) * 1.5;
    }
    else
    {
        totalPrice = 10 * 2.0 + 20 * 1.5 + (copies - 30);
    }

    cout << fixed << setprecision(2);
    cout << "Total price = " << totalPrice << " DA" << endl;

    return 0;
}
