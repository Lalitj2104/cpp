#include <bits/stdc++.h>
#include <cmath> 
using namespace std;


// int height(vector<int> &arr)
// {
//     int n = arr.size();
//     int h = static_cast<int>(log2(n)+1);
//     return h;
// }


int leaf_nodes(vector<int> &arr){
    int c=0;
    for(int i=0;i<arr.size();i++){
        if(2*i+1>=arr.size()||arr[2*i+1]==-1){
            c++;
        }
    }
            return c;

}

int main()
{
    vector<int> arr = {1,2,3};
    // cout << height(arr);
    cout<<leaf_nodes(arr);

}