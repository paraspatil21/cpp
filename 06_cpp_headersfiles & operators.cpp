#include <iostream>

using namespace std;
int main()
{
    int a = 3, b = 5, add, sub, mult, div, mod;

    cout << "This is the hello world program...!\n";
    cout << "Operators in the cpp\n";
    cout << "Following are the types of the opertatos";

    add = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    mod = a % b;

    // Arithmatic oprators
    cout << "\n\n___________________Arithmatic operators________________\n\n";
    cout << "\nThe addition of a and b is:" << add;
    cout << "\nThe substraction of a and b is : " << sub;
    cout << "\nThe multiplication of a and b is : " << mult;
    cout << "\nThe division of a and b is : " << div;
    cout << "\nThe mod of a and b is : " << mod;

    cout << "\nThe a++ of a is : " << --a; // 2334
    cout << "\nThe a++ of a is : " << ++a;
    cout << "\nThe a++ of a is : " << a++;
    cout << "\nThe a++ of a is : " << a--;
    cout << "\nThe a++ of a is : " << --b; // 4556
    cout << "\nThe a++ of a is : " << ++b;
    cout << "\nThe a++ of a is : " << b++;
    cout << "\nThe a++ of a is : " << b--;

    cout << "\n\n___________________Assignment operators________________\n\n";
    // int a = 5, b= 5;
    // char c = 's';

    cout << "\n\n___________________Comparison operators________________\n\n";

    cout << "The value of value a==b is:" << (a == b) << endl;
    cout << "The value of value a!=b is:" << (a != b) << endl;
    cout << "The value of value a<b is:" << (a < b) << endl;
    cout << "The value of value a>b is:" << (a > b) << endl;
    cout << "The value of value a<=b is:" << (a <= b) << endl;
    cout << "The value of value a>=b is:" << (a >= b) << endl;

    cout << "\n\n___________________Logical operators________________\n\n";

    cout << "The value of ((a == b) && (a<b))  is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of ((a == b) || (a<b))  is:" << ((a == b) || (a < b)) << endl;
    cout << "The value of (!(a == b) ) is:" << (!(a == b)) << endl;

    return 0;
}
