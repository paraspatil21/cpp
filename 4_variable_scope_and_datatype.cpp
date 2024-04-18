#include <iostream>
using namespace std;
int glo = 6;

void sum()
{
    int a;
    cout << "\nThe global variable is : " << glo;
}
int main()
{
    int glo = 9;
    glo = 78;
    int a = 4;
    int b = 5;
    float pi = 3.142;
    char c = 'P';
    int abc = true;

    cout << "This is the tutorial 4. \n here the value of a and b is " << a << " and " << b << " respectively";
    cout << "\nThe value of the pi is " << pi;
    cout << "\nThe value of the c is " << c;
    sum();
    cout << "\nThe value of the local variable : " << glo;
    cout << "\n The value of the abc is : " << abc;

    return 0;
}