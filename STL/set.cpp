#include <iostream>
#include <set>
using namespace std;
int main(){
    set <int> s;

    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(1);
    s.insert(8);
    s.insert(0);
    
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.begin());
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<s.count(4)<<endl;

    
}