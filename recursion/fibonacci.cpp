#include <iostream>
using namespace std;
int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    int result = fibonacci(num - 1) + fibonacci(num - 2);
    return result;
}
int main()
{
    int num;
    cout << "Enter the number to which u want to find series: ";
    cin >> num;
    int result = fibonacci(num);
    cout << result;
}
