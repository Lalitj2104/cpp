#include<bits/stdc++.h>
using namespace std;
void allcombination(vector<string>& ans,int index,vector<vector<char>> vec,string& ok){
    if(index==vec.size()){
        ans.push_back(ok);
        return;
    }
    for(int i=0;i<(vec[index].size());i++){
        ok+=vec[index][i];
        allcombination(ans,index+1,vec,ok);
        ok.pop_back();
    }
}
int main(){
    vector<string> ans;
    int n;
    cin>>n;
    vector<vector<char>> vec(n,vector<char> (2,'a'));
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>vec[i][j];
        }
    }
    string ok="";
    allcombination(ans,0,vec,ok);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}