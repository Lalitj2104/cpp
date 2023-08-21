// finding no. of onebits in the binary number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    int count = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            count+=1;
        }
        num = num >> 1;
        cout<< count<<endl;
    }
    
}