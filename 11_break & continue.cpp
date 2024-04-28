#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 40; i++)
    {

        if (i == 11)
        
        {

            break;
        }
        cout << i << endl;
    }
    cout << endl
         << endl;
    for (int i = 1; i < 40; i++)
    {

        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }

    cout << "_________________________Continue Keyword_________________________\n\n";

    for (int i = 0; i < 40; i++)

    {
        if (i == 2)

        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}