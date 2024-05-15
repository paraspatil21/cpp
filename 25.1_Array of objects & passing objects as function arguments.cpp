#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the ID of the employee : " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The Id of this employee is : " << id << endl;
        cout<<endl<<endl;
    }
};

int main()
{
    Employee obj1, obj2;

    obj1.setId();
    obj1.getId();

    Employee fb[5];
    for (int i = 0; i <= 5; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}