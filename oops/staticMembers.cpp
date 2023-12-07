#include<iostream>
using namespace std;
class test{
    private:
    int a;
    int b;
    public:
    static int count;

    test(){
        a=10;
        b=20;
        count++;
    }
    static int getcount(){
        return count;
    }
};

int test::count=0;

int main(){
    test t1,t2;
    cout<<test::getcount()<<endl;
    cout<<t1.getcount()<<endl;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<test::count<<endl;

}