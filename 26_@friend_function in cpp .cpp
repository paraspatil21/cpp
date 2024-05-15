/* Properties of friend functions
1. they can access private and protected
   members of the class even if those are
   not declared as friends in the class itself.
2. They don't have to be declared as friends in a class,
   but still can call each other (mutual friendship).
3 Friend function (outer function) is not the part of the main class, nut it can access the data of that main class , because he is friend
4 since it is not  in the scope of the class , it cannot be called from the object of that class , c1.sumComplex()  ==> invalid
5 usually contains the  objects as arguments
6 can be declare inside public and private section of the class
7 It cannot access the members directly by their names and need object_name , member_name to access any member.



   */

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non - member sumComplex functioons is allowes to do anything with my private members
    friend complex sumComplex(complex o1, complex o2);

    void printNumber()
    {
        cout << "Your number is " << a << " and " << b << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
}
int main()

{
    complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 9);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
