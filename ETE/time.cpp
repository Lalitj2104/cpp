#include<iostream>
using namespace std;
class Time{
    private:
        int hours;
        int minutes;
    public:
    Time(int hours,int minutes){
        this->hours=hours;
        this->minutes=minutes;
    }
    void display(){
        if(hours==12){
            cout<<12<<":"<<minutes<<" pm"<<endl;
        }else{
            if(hours<12){
                cout<<hours<<":"<<minutes<<" am"<<endl;
            }else{
                cout<<hours%12<<":"<<minutes<<" Pm"<<endl;
            }
        }
    }
    void operator++(){
        hours=(hours+1)%24;
    }
    void operator++(int){
        int sum=minutes+1;
        minutes=sum%60;
        hours+=sum/60;
        hours=(hours)%24;
    }
};
int main(){
    Time t1(10,59);
    t1++;
    t1.display();

}