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
    complex add(complex a)
    {
        complex temp;
        temp.real = real + a.real;
        temp.img = img + a.img;
        return temp;
    }
};
int main()
{
    complex c(2, 3);
    complex c1(4, 5);
    complex c3 = c1.add(c);
    cout << c3.real << "+i" << c3.img;
}