#include <iostream>
#include <queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> p;


    //min heap
    priority_queue<int,vector<int>,greater<int> > min;
    
    p.push(2);
    p.push(1);
    p.push(5);
    p.push(3);
    p.push(4);

    int a=p.size();
    for(int i=0;i<a;i++)
{
    cout<<p.top()<<" ";
    p.pop();
}cout<<endl;




    min.push(2);
    min.push(3);
    min.push(5);
    min.push(0);
    min.push(1);

    int b=min.size();
    for(int i=0;i<b;i++)
{
    cout<<min.top()<<" ";
    min.pop();
}cout<<endl;
}