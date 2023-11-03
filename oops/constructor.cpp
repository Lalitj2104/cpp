#include <iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    int area(){
        return(length*breadth);
    }
    int perimeter(){
        return(2*(length+breadth));
    }
    rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBreadth(b);
    }
    void setLength(int l){
        length =l;
    }
    void setBreadth(int b){
        breadth=b;
    }
};
int main(){ 
    rectangle r1(2,5);
    rectangle r2(r1);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
}