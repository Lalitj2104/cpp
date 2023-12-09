#include <iostream>
using namespace std;
#include <array>
int main(){
    int c,d,i,j;
    cin>>c>>d;
    int arr[c],arr1[d];

    for(i=0;i<c;i++){
        cin>>arr[i];
    }
    for(j=0;j<d;j++){
        cin>>arr1[j];
    }
cout<<"common elements: "<<endl;
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
                if(arr[i]==arr1[j]){
                    
                    cout<<arr[i]<<endl;

                }
        }
    }
}