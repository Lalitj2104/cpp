#include <iostream>
#include <map>
#include <vector>
using namespace std;

void frequency(vector<int> v, int x)
{
    map<int, int> m;
    for (int i = 0; i < x; i++)
    {
        m[v[i]]++;
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}

int main()
{
    vector<int> v;
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }

    frequency(v, x);
}