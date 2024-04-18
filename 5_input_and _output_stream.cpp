#include <iostream>
using namespace std;
int main()
{

    //   << Insertion operator
    //   >> Extraction operator
    int num1, num2, sum;
    cout << "Enter the value value of the num 1 and num2 respectively: \n"; //    Insertion operator
    cin >> num1 >> num2;                                                    //    Extraction operator

    sum = num1 + num2;
    cout << "The sum of the value " << num1 << " and " << num2 << " is equal to :" << sum; //     Insertion operator

    return 0;
}