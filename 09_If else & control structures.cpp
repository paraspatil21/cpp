#include <iostream>
using namespace std;

int main()
{
    float i = 0.1;

    // Selection control structure
    cout << "____________________Selection control structure(if-else, switch)____________________\n\n";
    if (i > 0)
    {
        cout << "Success\n";
    }
    else
    {
        cout << "Error\n";
    }

    int p = 0.1;
    if (p > 0)
    {
        cout << "Success\n";
    }
    else
    {
        cout << "Error\n";
    }

    int x;
    cout << "Enter the value of the x: \n";
    cin >> x;
    switch (x)
    {
    case 1:
    {
        cout << "1st Success\n";
        break;
    }

    case 2:
    {
        cout << "2nd Success\n";
        break;
    }
    case 3:
    {
        cout << "3rd Success\n";
        break;
    }

    default:
    {
        cout << "Error\n";
    }
    }
}
