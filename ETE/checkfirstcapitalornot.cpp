#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    bool flag = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 && isupper(str[i]))
        {
            flag = true;
        }
        else if (str[i - 1] == ' ' && !isupper(str[i]))
        {
            flag = false;
        }
    }

    if (flag == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}