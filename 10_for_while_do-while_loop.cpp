#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "\n\n______________________________________Loops in cpp______________________________________\n\n";
    cout << "______________________________________1)For loop______________________________________\n";

    for (i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }
    cout << endl
         << endl;

    for (i = 1; i < 10; i++)
    {
        cout << i << endl;
        i++;
    }

    cout << "______________________________________2)While loop______________________________________\n";

    //   while (/* condition */)
    //    {
    //      code
    //    }

    i = 0;
    while (i <= 40)
    {
        cout << i << endl;
        i++;
    }

    cout << "______________________________________3)Do while loop______________________________________\n";

    i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 40);

    i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (false);
    float i;
    float num;
    float stop;
    float ans;
    cout << "Enter the number that you want the table of: ";
    cin >> num;

    cout << "Enter till which number you eant to multiply:";
    cin >> stop;

    for (i = 1; i <= stop; i++)
    {
        ans = num * i;
        cout << num << " x " << i << " = " << ans << endl;
    }
    return 0;
}