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
    complex operator+(complex a)
    {
        complex temp;
        temp.real = real + a.real;
        temp.img = img + a.img;
        return temp;
    }
    friend ostream & operator<<(ostream &o,complex &c4);
};
     ostream & operator<<(ostream &o,complex &c4){
        o<<c4.real<<"+i"<<c4.img;
        return o;
     }

int main()
{
    complex c(2, 3);
    complex c1(4, 5);
    complex c3 = c1 + c;
    cout << c3;
}