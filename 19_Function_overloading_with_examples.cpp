#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

// Calcuate the volume of the cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calcuate the volume of the sqaure box
int volume(float a)
{
    return (a * a * a);
}

// Calculate volume of rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    int a, b, c;

    cout << "The sum of " << 2 << " and " << 9 << " is : " << add(2, 9) << endl;
    cout << "The sum of " << 2 << " , " << 9 << " and " << 10 << " is : " << add(2, 9, 10) << endl;
    cout << "The volume of cuboid of 3,7 and 6 is : " << volume(3, 7, 6) << endl;
    cout << "The volume of the cylinder  radius 3 an dheight 6 is : " << volume(5, 4) << endl;
    cout << "The volume of the sqaure box : " << volume(5) << endl;

    return 0;
}
