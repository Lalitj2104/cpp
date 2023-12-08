#include <iostream>
using namespace std;

int division(int x, int y)
{
    if (y == 0)
        throw 0;
    else
        return x / y;
}

int main()
{
    int a = 20, b = 0, z;

    try
    {
        z = division(a, b);
        cout << z << endl;
    }
    catch (int q)
    {
        cout << "Division by zero " << q << endl;
    }
}