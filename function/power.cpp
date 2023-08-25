#include <iostream>
#include <math.h>
using namespace std;
int power(int a, int b)
{
    cin >> a >> b;
    int num = 1;
    for (int i = 1; i <= b; i++)
    {
        num *= a;
    }
    return num;
}

int main()
{
    int num1, num2;
    cout << "enter: " << endl;
    int ans = power(num1, num2);
    cout << "answer is: " << ans << endl;
}
