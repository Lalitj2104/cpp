#include <iostream>
using namespace std;
int main(){
    string str;
    int count=0;
    getline(cin,str);
    int size=str.length();
    for(int i=0;i<size;i++){
        if(str[i]=='u'||str[i]=='o'||str[i]=='i'||str[i]=='e'||str[i]=='a'||str[i]=='U'||str[i]=='O'||str[i]=='I'||str[i]=='E'||str[i]=='A'){
            count++;
        }
    }
    cout<<count<<endl;
}