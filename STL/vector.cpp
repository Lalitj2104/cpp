#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;

    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;


    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;

    cout<<"element at 1 index: "<<v.at(1)<<endl;

    cout<<"first element: "<<v.front()<<endl;
    cout<<"last element : "<<v.back()<<endl;


    cout<<"before pop:";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After pop:";
    for(int i:v){
        cout<<i<<" ";
    }
}