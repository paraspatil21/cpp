#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n___________________________Pointers___________________________\n\n";

    // Pointer is nothing but the datatype
    // Pointer which holds the address of the another datatype

    cout << "Pointer is nothing but the datatype\n"
            "Pointer which holds the address of the another datatype\n\n";

    // Pointer to pointer
    cout << "___________________________Pointer to pointer___________________________\n\n";

    int a = 3;
    int *b = &a;
    int **c = &b;

    // & ----> (Address of)operator

    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;

    // * ---->(Value of) (Value at) Dereference operator

    cout << "The value at address b is : " << *b << endl;

    cout << "The address of b is:" << &b << endl; 
    cout << "The address of b is:" << c << endl;
    cout << "The value at address c is: " << *c << endl;
    cout << "The value at address value_at(value_at(c)) c is: " << **c << endl;

    return 0;
}