#include <iostream>
using namespace std;
class shape{
    public:
    float l;
    float b;
    float r;

};
class rectangle:public shape{
    public: 
    void area(){
        cout<<l*b<<endl;
    }

    void perimeter(){
        cout<<2*(l+b)<<endl;
    }
};

class circle: public shape{
    public:
    void area(){
        cout<<3.14*r*r<<endl;
    }
    void perimeter(){
        cout<<2*3.14*r<<endl;
    }

};


int main(){
    rectangle r;
    cin>>r.l;
    cin>>r.b;
    r.area();
    r.perimeter();

    circle c;
    cin>>c.r;
    c.area();
    c.perimeter();


}