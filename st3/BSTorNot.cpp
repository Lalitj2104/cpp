#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr,int index,int min,int max){
    if(index>=arr.size()){
        return true;
    }
    if(arr[index]<min ||arr[index]>max){
        return false;
    }

    return isValid(arr,2*index+1,min,arr[index]-1) && isValid(arr,2*index+2,arr[index]+1,max);
}

int main(){
    vector<int> arr={4,2,6,1,3,5,7};
   cout<< isValid(arr,0,INT_MIN,INT_MAX);
}
