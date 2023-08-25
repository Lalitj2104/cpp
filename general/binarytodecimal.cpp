#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    int power = 1;
    while (num != 0)
    {
        int rem = num % 10;
        if (rem == 1)
        {
            sum += power;
        }
        power *= 2;
        num /= 10;
    }
    cout << sum;
}