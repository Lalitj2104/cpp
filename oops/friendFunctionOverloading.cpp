#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;

    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend complex operator+(complex a, complex b);
};
complex operator+(complex a, complex b)
{
    complex temp;
    temp.real = b.real + a.real;
    temp.img = b.img + a.img;
    return temp;
}

int main()
{
    complex c1(10, 4);
    complex c2(2, 3);
    complex c3 = c1 + c2;
    cout << c3.real << "+ i" << c3.img;
}