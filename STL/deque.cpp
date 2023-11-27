#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    cout<<"empty or not: "<<d.empty()<<endl;
    cout<<"Element asked is :"<<d.at(1)<<endl;
    cout<<"Element at start: "<<d.front()<<endl;
    cout<<"Element at last: "<<d.back()<<endl;

    cout<<"size before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"size after erase: "<<d.size()<<endl;


}