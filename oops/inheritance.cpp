#include <iostream>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"Displaying the base class"<<endl;
    }
};

class derived : public Base{
    public:
    void Display1(){
        cout<<"Displaying the derived class"<<endl;

    }
};

int main(){
    derived d1;
    d1.display();
    d1.Display1();
}
