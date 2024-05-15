#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(complex obj1, complex obj2) // He main concept ahe ki , ithe apan main dunction madhun , apan obejcts pass kele ahet ,
    //                                                       so ki te run hoil ani , datatype ha complex lihayacha , ex. complex obj1
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }

    void printNumber()
    {
        cout << "Your complex number is : " << a << " + " << b << " i " << endl;
    }
};

int main()
{
    complex obj1, obj2, obj3;

    obj1.setData(1, 2);
    obj1.printNumber();

    obj2.setData(3, 4);
    obj2.printNumber();

    obj3.setDataBySum(obj1, obj2);
    obj3.printNumber();

    return 0;
}