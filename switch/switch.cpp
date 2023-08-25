#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    switch (num)
    {
    case '1':
        cout << "Character" << endl;
        break;
    case 1:
        cout << "integer" << endl ; break;
    default:
        cout << "this is a default case" << endl;
    }
}