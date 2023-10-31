#include <iostream>
using namespace std;

class person{
    char name[30];
    int age;
    public:
    void getdata(void);
    void display(void);
};
//fetching data
void person::getdata(void){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>> age;

}
//display
void person:: display(void){
    cout<<"Name: "<<name<<endl;
    cout<< "age: "<<age<<endl;

}

int main(){
    person p;
    p.getdata();
    p.display();

    return 0;
}

