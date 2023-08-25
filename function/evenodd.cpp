#include <iostream>
#include <math.h>
using namespace std;

void evenOdd(int a)
{
    cout << "Enter number: " << endl;
    cin >> a;
    if (a  == 0)
    {
        cout << "number is zero" << endl;
    }
    else if (a % 2 == 0)
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }

}


int main()
{
    int num;
    evenOdd(num);
}


