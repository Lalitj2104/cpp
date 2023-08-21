#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "enter the number";
    cin >> n;
    while(i<=n){
        int j=1;
        while(j<=i){
            int count=i;
            cout<<i-j+1;
            j++;

        }
        cout<<endl;
        i++;
    }
}