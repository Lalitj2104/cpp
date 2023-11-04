#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;
    int s, e;
    cout << "Enter the starting range and ending range: " << endl;
    cin >> s >> e;
    for (int i = s; i <= e; i++)
    {

        cout << "Enter a positive number: ";
        cin >> num;

        n = num;

        do
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        } while (num != 0);

        cout << " The reverse of the number is: " << rev << endl;

        if (n == rev)
            cout << " The number is a palindrome.";
        else
            cout << " The number is not a palindrome.";
    }

    return 0;
}