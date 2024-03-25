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

double ncr(int n, int r)
{
    int t1, t2, t3;
    t1 = factorial(n);
    t2 = factorial(r);
    t3 = factorial(n - r);
    return t1 / (t2 * t3);
}

// recursive function from pascal's triangle
int c(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return c(n - 1, r - 1) + c(n - 1, r);
    }
}

int main()
{

    int n, r;
    cin >> n >> r;
    cout << ncr(n, r);
}