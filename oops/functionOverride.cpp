#include<iostream>
using namespace std;
class Parent{
    public:
    void display(){
        cout<<"Display of parent"<<endl;
    }
};
class Child:public Parent{
    public:
    void display(){
        cout<<"Display of child"<<endl;
    }
};

int main(){
    Parent p;
    p.display();

    Child c;
    c.display();
}