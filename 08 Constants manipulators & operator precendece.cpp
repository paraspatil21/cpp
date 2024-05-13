#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    const float pi = 3.142;
    cout << "The value of the pi is :" << pi << endl;
    cout << "\n\n______________The Manipulators____________________\n\n";
    int a = 2, b = 22, c = 2942;
    cout << "The value of the a without Manipulators is: " << a << endl;
    cout << "The value of the b without Manipulators is: " << b << endl;
    cout << "The value of the c without Manipulators is: " << c << endl;

    cout << "The value of the a is: " << setw(4) << a << endl; // The value of the a is:    2
    cout << "The value of the b is: " << setw(4) << b << endl; // The value of the b is:   22
    cout << "The value of the c is: " << setw(4) << c << endl; // The value of the c is: 2942

    // Operators Precedence
    cout << "\n\n______________The Operators Precedence____________________\n\n";

    int x = 3, y = 4;
    int z = ((((x * 5) + y) - 45) + 87);
    cout << c;

    return 0;
}
