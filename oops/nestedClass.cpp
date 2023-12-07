#include <iostream>
using namespace std;

class Outer{
    public:
    void fun(){
        i.display();
    }

    class Inner{
        public:
            void display(){
                cout<<"display of inner"<<endl;
            }
    };
    Inner i;
};