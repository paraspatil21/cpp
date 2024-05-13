#include <iostream>
using namespace std;
int c = 51;
int main()
{

     cout << "\n_____________________________Build in datatypes_____________________________________\n\n";
     int a, b, c;

     cout << "Enter the value of a:" << endl;
     cin >> a;
     cout << "Enter the value of b:" << endl;
     cin >> b;

     c = a + b;
     cout << "The sum of a and b is: " << c << endl;

     cout << "The value of local C is : " << c << endl
          << endl;

     cout << "We can print the global varible by using ::c (Scope resolution operator)\n";
     cout << "The value of global C is : " << ::c << endl;

     cout << "\n_____________________________Float , double and long double literals_____________________________________\n\n";
     float d = 34.4f;
     long double e = 34.4l; // 34.4 is by default double

     cout << "\nThe size of 34.4 is :" << sizeof(34.4f);
     cout << "\nThe size of 34.4f is :" << sizeof(34.4f);
     cout << "\nThe size of 34.4F is :" << sizeof(34.4F);
     cout << "\nThe size of 34.4l is :" << sizeof(34.4l);
     cout << "\nThe size of 34.4L is :" << sizeof(34.4L);

     cout << "\n\nThe value of d is" << d << endl
          << "The value of e is" << e << endl;

     cout << "\n_____________________________Referance variables_____________________________________\n\n";
     // Paras ------> Bhaiya -------> Pappya-------> Bandya;

     float x = 51;
     float &y = x;
     cout << x << endl;
     cout << y << endl;

     cout << "\n_____________________________Type Casting_____________________________________\n\n";

     int t = 45.32;
     float s = 45.435;
     cout << "The value of t is : " << t << endl;
     cout << "The value of t is : " << (float)t << endl;
     cout << "The value of t is : " << (int)s << endl;
     int g = int(b);

     cout << "The expression is : " << a + b << endl;
     cout << "The expression is : " << a + int(b) << endl;
     cout << "The expression is : " << a + (int)b << endl;

     return 0;
}
