#include <iostream>
using namespace std;
class num{
    public:
    int num1;
    int num2;

    num sub(num x){
        num temp;
        temp.num1=num1-x.num1;
        temp.num2=num2-x.num2;
        return temp;
    }

    // num operator-(num x){
    //     num temp;
    //     temp.num1=num1-x.num1;
    //     temp.num2=num2-x.num2;
    //     return temp;
    // }

};
    void display(num q){
        cout<<q.num1<<" "<<q.num2;
    }

int main(){
    num a,b;
    a.num1=10;
    a.num2=20;
    b.num1=5;
    b.num2 =7;
    num c1 =a.sub(b);
    // num c=a-b; 
    display(c1);
}