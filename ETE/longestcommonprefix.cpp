#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> a;
    for (int i = 0; i < 3; i++)
    {
        string c;
        cin >> c;
        a.push_back(c);
    }
    int n;
    n = a[0].size();

    for (int i = 1; i < n; i++)
    {
        n = fmin(n, a[i].size());
    }
    string pre;
    for (int i = 0; i < n; i++)
    {
        char b = a[0][i];
        bool flag = true;
        for (int j = 0; j < 3; j++)
        {
            if (a[j][i] != b)
            {
                flag = false;
            }
        }
        if (flag == true)
            pre += b;
        else
            break;
    }
    cout << pre;
}