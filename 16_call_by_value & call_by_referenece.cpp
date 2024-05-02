#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void swap(int a, int b)

{

    cout << "1f (he print nahi zhal tari chalel) Before swapping a and b are : a = " << a << " b = " << b << endl;
    //            // temp   a   b
    int temp = a; //  4     1   5
    a = b;        //  4     5   5
    b = temp;     //  4     5   1

    cout << "1f (he print nahi zhal tari chalel) After swapping a and b are :  a = " << a << " b = " << b << endl;
}

// Call by reference using pointers
void swap_pointer(int *a, int *b)

{

    cout << "2f (he print nahi zhal tari chalel) Before swapping a and b are : a = " << *a << " b = " << *b << endl;
    //             // temp   a   b
    int temp = *a; //  4     1   5
    *a = *b;       //  4     5   5
    *b = temp;     //  4     5   1

    cout << "2f (he print nahi zhal tari chalel) After swapping a and b are :  a = " << *a << " b = " << *b << endl;
}

// Call by reference using c++ reference variables
void swap_cpp_referenece_variable(int &a, int &b)

{
    cout << "3f (he print nahi zhal tari chalel) Before swapping a and b are : a = " << a << " b = " << b << endl;
    //             // temp   a   b
    int temp = a; //  4     1   5
    a = b;       //  4     5   5
    b = temp;     //  4     5   1

    cout << "3f (he print nahi zhal tari chalel) After swapping a and b are :  a = " << a << " b = " << b << endl;
}


int main()
{
    int a = 1, b = 5;
    cout << "The sum of 4 and 5 is : " << sum(a, b) << endl;

    cout << endl
         << endl;

    cout << " 1 Before swapping a and b are : a = " << a << " b = " << b << endl; // Ata ithe numbers swaps nahi hoonar karan ,
    //                                                                           // apan ky swap function madhun return madhun ghet nahiye
    swap(a, b); // This will not swap a and b                             // ani apan swap la values pathavatana, calue chya copy pathavato ,
    //                                                                           // tyane main values na kahi affect hot nahi ,
    //                                                                           // so jr , ka apan , swap che function madhun kahi return value ghetali ,
    //                                                                           // nahi tr tithe error yeto
    cout << " 1 After swapping a and b are :  a = " << a << " b = " << b << endl;

    cout << endl
         << endl;

    cout << "2 Before swapping a and b are : a = " << a << " b = " << b << endl;
    swap_pointer(&a, &b);                                 // This will swap a and b ny using pointer refernce
    cout << "2 After swapping a and b are :  a = " << a << " b = " << b << endl;

    cout << endl
         << endl;

a=1,b=5;
    cout << "3 Before swapping a and b are : a = " << a << " b = " << b << endl;
    swap_cpp_referenece_variable(a, b);                   // This will swap a and b ny using reference variavles
    cout << "3 After swapping a and b are :  a = " << a << " b = " << b << endl;
    return 0;
}
