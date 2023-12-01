#include <iostream>
using namespace std;
class student{
    private:
    int roll;
    string name;
    int marks1;
    int marks2;
    int marks3;
    public:
    void setRoll();
    void setName();
    void setMArks1();
    void setMarks2();
    void setMarks3();
    int getRoll();
    string getName();
    int getMarks1();
    int getMarks2();
    int getmarks3();
    int Grade();
    ~student(){
        cout<<"class is destroyed";
    }
    
};