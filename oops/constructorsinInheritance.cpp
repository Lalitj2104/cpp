#include <iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"default of base"<<endl;
    }
    base(int x){
        cout<<"Derived of base"<<endl;
    }
};
class derived :public base{
    public:
    derived(){
        cout<<"default of derived"<<endl;
    }
    derived(int x){
        cout<<"derived of derived"<<endl;
    }
};

int main(){
    derived d;
}