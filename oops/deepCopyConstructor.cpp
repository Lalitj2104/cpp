#include <iostream>
using namespace std;
class test{
    private:
    int a;
    int *p;
    public:
    test(int x){
        a=x;
        p=new int[a];
    }
    test(test &t){
        a=t.a;
        p=new int[a];
    }
};
int main(){
    test t(5);
    test t2(t);

}