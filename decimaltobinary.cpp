#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter a nuumber: ";
    cin >> num;
    int rem = 0;
    int i = 0;
    while (num != 0)
    {
        int r = num % 2;
        rem = (r * pow(10, i)) + rem;
        num /= 2;
        i++;
    }
    cout << rem;
}