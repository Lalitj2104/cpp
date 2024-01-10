#include <iostream>
using namespace std;
int main()
{

    char S[10] = "hello";
    char a[10] = {'h', 'e', 'l', 'l', 'o', '\0'};
    string b = "hello";
    char *c = "hello";
    cout << S << endl
         << a << endl
         << b << endl
         << c << endl;
}