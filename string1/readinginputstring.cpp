#include <iostream>
using namespace std;
int main()
{
    char s[20];
    cout << "Enter ur Name: ";
    cin.get(s, 100);
    cout << "welcome " << s << endl;
    cin.ignore();
    // for multiple lines we have to use getline()
    cout << "Enter ur Name: ";
    cin.getline(s, 100);
    cout << "welcome " << s << endl;
    cout << "Enter ur Name again : ";
    cin.getline(s, 100);
    cout << "welcome " << s << endl;
    return 0;
}