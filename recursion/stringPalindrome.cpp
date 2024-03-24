#include <bits/stdc++.h>
using namespace std;

bool reverse(string x, int i, int size)
{
    if (i >= size / 2)
    {
        return 1;
    }
    if ((x[i] != x[size - i - 1]))
    {
        return 0;
    }
    return reverse(x, i + 1, size - 1);
}
void palindrome(bool y)
{

    if (y == 0)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}

int main()
{
    string x = "mam";
    int size = x.length();
    bool y = reverse(x, 0, size);
    palindrome(y);
}