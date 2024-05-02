#include <iostream>
using namespace std;

int sum(int a, int b); // Function prototype     // Accepatable
void pp(void);         // Accepatable
// OR
void pp();             // Accepatable

// int sum(int a, int b); // Accepatable
// int sum(int, int);     // Accepatable
// int sum(int a, b);     // Not Accepatable

int main()
{
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;

    // num1 and num2 are the actual parameters
    cout << "The addition num 1 and num 2 is : " << sum(num1, num2);
    return 0;
}
int sum(int a, int b)
{
    // Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}

void pp()
{
    cout << "Hello, this is the void function for testing only.........!" << endl;
}
