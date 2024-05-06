#include <iostream>
using namespace std;
class Ganesha
{
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1); // Declaration
    void getdata()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
        cout << "The value of d is : " << d << endl;
        cout << "The value of e is : " << e << endl;
    }
};

void Ganesha::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Ganesha g1;
    g1.setdata(1, 2, 3);
    g1.d = 34;
    g1.e = 89;
    g1.getdata();

    return 0;
}