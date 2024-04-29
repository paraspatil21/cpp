#include <iostream>
using namespace std;

struct employee
{

    int id;
    char fav_char;
    float salary;
};

union money
{
    int food;     // int  4 size ghenar
    char car;     // char  1 size ghenar
    float pounds; // float  4 size ghenar
    // Tr union mahdye memory vachavi mhanun , apan  ithe max memory share karato , ani at a time , ekalach chance denar
};

int main()
{

    struct employee paras;
    paras.id = 321;
    paras.fav_char = 'p';
    paras.salary = 210000000;

    cout << "\n\nStruct madhye apan different data types store karu shakato \n";
    cout << "Union madhye apan 3 paiki 1 datatype use karu shakato (jene karun memory share hoil ani kami memory lagel)\n";
    cout << "(Karan union madhye apan jya data type chi size max asel , to datatype use karanar)\n\n";
    cout << "\n\n_______________________________________________Struct_______________________________________________\n\n";
    cout << "The value of Paras id is : " << paras.id << endl;
    cout << "The value of Paras Favorite character  is : " << paras.fav_char << endl;
    cout << "The value of Paras salary is : " << paras.salary << endl;

    cout << "\n\n_______________________________________________Union_______________________________________________\n\n";

    union money m1;
    m1.food = 34;
    cout << m1.food << endl;

    cout << endl;

    m1.pounds = 551.21;
    cout << m1.pounds << endl;
    cout << m1.food << endl;

    cout << "\n\n_______________________________________________Enum_______________________________________________\n\n";
    enum Meal
    {
        Breakfast,
        lunch,
        dinner
    };
    Meal m1 = lunch;
    cout << m1;

    cout <<(m1==2);

        cout << Breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    return 0;
}