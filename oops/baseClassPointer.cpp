#include <iostream>
using namespace std;
class base{
    public:
    void func1(){
        cout<<"func1 of base"<<endl;

    }
    void func2(){
        cout<<"func2 of base"<<endl;
    }
};
class derived: public base{
    public:
    void func3(){
        cout<<"func3 of derived"<<endl;
    }
    void func4(){
        cout<<"func4 of derived"<<endl;
    }
    
};

int main(){
    base *p;
}