#include <iostream>

using namespace std;

int main()
{
    int month;

    cout << "Enter the month number: ";
    cin >> month;

    switch (month)
    {
        case 12:
        case 1:
        case 2:
            cout << "Season = Winter" << endl;
            break;

        case 3:
        case 4:
        case 5:
            cout << "Season = Spring" << endl;
            break;

        case 6:
        case 7:
        case 8:
            cout << "Season = Summer" << endl;
            break;

        case 9:
        case 10:
        case 11:
            cout << "Season = Autumn" << endl;
            break;

        default:
            cout << "Invalid month number" << endl;
    }

    return 0;
}
