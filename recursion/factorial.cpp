#include <iostream>
using namespace std;
int factorial(int num)
{
    int sum = 1;
    if (num == 1)
    {
        return 1;
    }

    int fact = factorial(num - 1);
    sum = num * fact;
    return sum;
}
int main()
{
    int num;
    cout << "enter the number whose fact u have 2 find: ";
    cin >> num;
    int result = factorial(num);
    cout << "factorial of" << num << " is: " << result;
}