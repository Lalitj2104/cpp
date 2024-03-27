#include <iostream>
using namespace std;

void hanoi(int n, int a, int b, int c)
{
    if (n > 0)
    {
        hanoi(n - 1, a, c, b);
        cout << a << " " << c << endl;
        hanoi(n - 1, b, a, c);
    }
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    hanoi(n, a, b, c);
}