#include <iostream>
using namespace std;
class car{
    public:
    virtual void start(){
        cout<<"Car started"<<endl;
    }
    virtual void stop(){
        cout<<"Car stopped"<<endl;
    }
};
class Innova:public car{
    public:
    void start(){
        cout<<"Innova car started"<<endl;
    }
    void stop(){
        cout<<"Innova car stopped"<<endl;
    }
};
class Swift:public car{
    public:
    void start(){
        cout<<"Swift car started"<<endl;
    }
    void stop(){
        cout<<"Swift car stopped"<<endl;
    }
};


int main(){
    car *c=new Innova();
    c-> start();
    c= new Swift();
    c->start();
    
}