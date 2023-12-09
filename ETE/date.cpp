#include <iostream>
using namespace std;
class date{
    public:
    int dat;
    int month;
    int year;
    date(int dat,int month,int year){
        this->dat=dat;
        this->month=month;
        this->year=year;
    }
    void display(){
        if(dat<=29 && month==2){
            if(dat==29 && year%4==0 && year%400==0||year%100){
                cout<<dat<<" Feburary"<<year<<endl;
                cout<<"valid date"<<endl;
            }
            else if(dat<=28){
                cout<<dat<<" Feburary"<<year<<endl;
                cout<<"valid date"<<endl;
            }
            else{
                cout<<"invalid date"<<endl;
            }
            
        }
        else if(dat <=30){
            switch(month){
                case 1: cout<<dat<<" Jan "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 3: cout<<dat<<" march "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 4: cout<<dat<<" april "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 5: cout<<dat<<" may "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 6: cout<<dat<<" June "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 7: cout<<dat<<" july "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 8: cout<<dat<<" august "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 9: cout<<dat<<" sept "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 10: cout<<dat<<" oct "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 11: cout<<dat<<" nov "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 12: cout<<dat<<" dec "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
            }
        }
        else if(dat ==31){
            switch(month){
                case 1: cout<<dat<<" Jan "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 3: cout<<dat<<" march "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 5: cout<<dat<<" may "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 7: cout<<dat<<" july "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 8: cout<<dat<<" august "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 10: cout<<dat<<" oct "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
                case 12: cout<<dat<<" dec "<<year<<endl;
                cout<<"valid date"<<endl;
                break;
            }
        
        }
        else{
            cout<<"Invalid date";
        }
        
    }
};

int main(){
    date t(30,2,2004);
    t.display();

}