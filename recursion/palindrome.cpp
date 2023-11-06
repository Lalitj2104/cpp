#include <iostream>
using namespace std;
void palindrome(string &num, int i, int j)
{
    if (i > j)
    {
        return;
    }

    swap(num[i], num[j]);
    i++;
    j--;

    palindrome(num, i, j);
}

int main()
{
    string digit;
    cout << "Enter the digit u want :" << endl;
    cin >> digit;
    string result = digit;
    int j = digit.length() - 1;
    palindrome(digit, 0, j);
    if (digit == result)
    {
        cout << "Yes, it is a palindrome" << endl;
    }
    else
    {
        cout << "no, its not" << endl;
    }
}