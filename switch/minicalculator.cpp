#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout << "enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout << "enter operation: "<<endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (num1 + num2) << endl;
        break;
    case '-':
        cout << (num1 - num2) << endl;
        break;
    case '*':
        cout << (num1 * num2) << endl;
        break;
    case '/':
        cout << (num1 / num2) << endl;
        break;
    case '%':
        cout << (num1 % num2) << endl;
        break;
    default:
        cout << "Invalid case" << endl;
    }
}