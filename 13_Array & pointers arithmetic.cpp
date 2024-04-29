#include <iostream>
using namespace std;
int main()
{
    int i;
    int marks[4] = {10, 20, 30, 40};
    cout << "These are the marks: \n";
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    cout << endl
         << endl;

    marks[3] = 0;
    cout << marks[3] << endl;

    cout << endl
         << endl;
    i = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }

    cout << endl
         << endl;

    i = 0;
    do
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++;
    } while (i < 4);

    cout << endl
         << endl;

    i = 0;
    while (i < 4)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++;
    }

    cout << "\n\n_____________________________________Pointers in arrays_____________________________________\n\n";

    int *p = marks;
    cout << "The value of *p : " << *p << endl;
    cout << "The value of *(p + 1) : " << *(p + 1) << endl;
    cout << "The value of *(p + 2) : " << *(p + 2) << endl;
    cout << "The value of *(p + 3) : " << *(p + 3) << endl;

    cout << "\n\n__________________________________________Concept of increament__________________________________________\n\n";
    cout << *(p++) << endl;
    cout << *(++p) << endl;

    return 0; // return 0 jite yeyil , tithun function sampanar
}
