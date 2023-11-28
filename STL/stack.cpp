#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> s;



    s.push("hey");
    s.push("We");
    s.push("Are");
    s.push("Coders");


    cout<<"Top element is: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element is: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or Not: "<<s.empty()<<endl;
}