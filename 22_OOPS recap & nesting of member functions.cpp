#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void check_binary_or_not(void);
    void ones_compliments(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number: " << endl;
    cin >> s;
}

void binary ::check_binary_or_not(void)
{
    for (int i = 0; i <= s.length; i++)
    {
        if (s.at(i) != 0 && s.at(i) != 1)
        {
            cout << "Your value " << s << "is binary." endl;
        }
        else
        {
            cout << "Incorrect binary format";
        }
    }
}

void ones_compliments(void)
{
    for (int i = 0; i <= s.length; i++)
    {
        if (s.at(1) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

int main()
{
    // OOPs - classes and objects
    // c++ ---->  classes

    cout << "\n\n__________________________Nesting of the member functions__________________________\n\n";

    return 0;
}