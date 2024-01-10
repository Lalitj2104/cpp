#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // for finding the length
    // char *s;
    // cout<<"Enter any word: ";
    // cin.getline(s,100);
    // cout<<"length"<<strlen(s)<<endl;
    // for concatination of strings
    char s1[40] = "jai shree ";
    char s2[10] = "ram";

    strcat(s1, s2);
    cout << s1 << endl;
    // for copying the data of string
    char s3[10] = "hello";
    char s4[10] = "";
    strcpy(s4, s3);
    cout << s4;
    cout << strstr(s1, "jai") << endl;
}