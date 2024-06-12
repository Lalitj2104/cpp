#include <bits/stdc++.h>
using namespace std;

void preorder(vector<int> x, int index)
{
    if (index > x.size() || x[index] == -1)
    {
        return;
    }
    else
    {
        cout << x[index] << " ";
        preorder(x, index * 2 + 1);
        preorder(x, index * 2 + 2);
    }
}

void postorder(vector<int> x, int index)
{
    if (index > x.size() || x[index]==-1){
        return;
    }
    else{
        preorder(x, index * 2 + 1);
        preorder(x, index * 2 + 2);
        cout << x[index] << " ";
    }
}

void inorder(vector<int> x, int index)
{
    if (index > x.size() || x[index]==-1){
        return;
    }
    else{
        inorder(x, index * 2 + 1);
        cout << x[index] << " ";
        inorder(x, index * 2 + 2);
    }
}
int main()
{
    string s;
    getline(cin, s);
    istringstream q(s);
    string value;
    vector<int> x;
    while (q >> value)
    {
        if (value == "-1")
        {
            x.push_back(-1);
        }
        else
        {
            x.push_back(stoi(value));
        }
    }

    for(auto i:x)cout<<i<<endl;
    // inorder(x, 0);
}