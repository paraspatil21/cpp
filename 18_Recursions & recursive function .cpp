#include <iostream>
using namespace std;
int factorial(int n)
{

    if (n < 2)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int fib(int p)
{
    if (p < 2)
    {
        return 1;
    }
    else
    {
        return fib(p - 2) + fib(p - 1);
    }
}

int main()
{
    int n;
    int p;
    // Factorial of a number:
    //  6! = 6*5*4*3*2*1 = 720
    //  0! = 1 by the factorial rule
    //  1! = 1 by the factorial rule
    //  n! - n * (n-1)!

    cout << "Enter the number , that you want the factorial of:\n";
    cin >> n;

    cout << "\nFactorial of " << n << " is " << factorial(n);

    cout << endl
         << endl;

    cout << "\nEnter the number , that you want the fibonacci of : \n";
    cin >> p;

    cout << "\nThe term in fibonacci sequence at position " << p << " is " << fib(p);

    return 0;
}