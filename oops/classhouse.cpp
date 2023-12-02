#include <iostream>
using namespace std;

class A{
    public:
    int houseNo;
    string Address;
    // A(int x=0,string y = "na"){
    //     houseNo=x;
    //     Address=y;

    // }
};

class B:public A{
    public:
    string name;
    // B(string q="na"){
    //     name=q;
    // }


};


int main(){
    B kid;
    kid.houseNo=123;
    kid.Address="pathankot";
    kid.name="Milan";

}