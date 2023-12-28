#include <iostream>
using namespace std;
int main()
{
    string ch;
    getline(cin, ch);
    for (int i = 0; i < ch.length(); i++)
    {
        if (i == 0)
        {
            ch[i] = toupper(ch[i]);
        }
    }
    cout << ch;
}