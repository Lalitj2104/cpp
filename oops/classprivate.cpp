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
    void setLength(int l){
        if(l>0){
            length=l;
        }
        else{
            cout<<"length can't be negative";
            length =0;
        }
    }
    void setBreadth(int b){
        if(b>0){
            breadth=b;
        }
        else{
            cout<<"breadth can't be negative";
            breadth=0;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};
int main(){
    rectangle r;
    r.setLength(10);
    r.setBreadth(20);
    cout<<r.area()<<endl;
    cout<<r.perimeter();
}