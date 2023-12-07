#include <iostream>
using namespace std;
class Base{
    public:
    //this virtual helps pointer to point on derived class
    virtual void func(){
        cout<<"func of Base"<<endl;
    }
};
class derived:public Base{
    public:
    void func(){
        cout<<"func of derived"<<endl;
    }
};

int main(){
    Base *ptr=new derived();
    ptr->func();
    derived d;
    d.func();

}