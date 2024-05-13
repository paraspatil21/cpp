#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id:" << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
      //   cout<<id;         //non static variable , he static madhye run hot nahi
        cout << "The value of count is " << count << endl;
    }
};
int Employee ::count; // hyachi first la run hotana , default value hi 0 asatya
                      //                     // jr ka apalayala default value vegali pahije ex. 1005 , tr apalayala define karayach ts
                      //                     //  int Employee ::count = 1005;

int main()
{
    Employee obj1, obj2, obj3;

    obj1.setData();
    obj1.getData();
    Employee::getCount();

    obj2.setData();
    obj2.getData();
    Employee::getCount();

    obj3.setData();
    obj3.getData();
    Employee::getCount();

    return 0;
}
