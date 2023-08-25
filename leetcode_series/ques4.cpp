// complement of base 10 integer
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter a number: " << endl;
    cin >> num1;
    num1 = num2;
    int mask = 0;

    if (num1 == 0)
    {
        cout << 1;
    }
    while (num1 != 0)
    {
        mask = (mask << 1) | 1;
        num1 = num1 >> 1;
    }
    int result = (~num2 & mask);
    cout << result << endl;
}