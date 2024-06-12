#include <bits/stdc++.h>
using namespace std;

int lca(const vector<int>& v, int x, int y) {
    int xind = -1, yind = -1;

    // Find indices of x and y in the vector
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == x) xind = i;
        if (v[i] == y) yind = i; // Corrected the typo here
    }

    // If either x or y is not found, return -1
    if (xind == -1 || yind == -1) {
        return -1;
    }

    // Use a set to store ancestors of x
    unordered_set<int> anc;
    while (xind >= 0) {
        anc.insert(xind);
        if (xind == 0) {
            break;
        }
        xind = (xind - 1) / 2;
    }

    // Traverse the ancestors of y and find the common ancestor
    while (yind >= 0) {
        if (anc.count(yind)) {
            return v[yind];
        }
        if (yind == 0) break;
        yind = (yind - 1) / 2;
    }

    // If no common ancestor is found, return -1
    return -1;
}

int main() {
    string str;
    getline(cin, str);
    istringstream s(str);
    string value;
    vector<int> v;

    // Parse the input string into a vector of integers
    while (s >> value) {
        if (value == "-1") {
            v.push_back(-1);
        } else {
            v.push_back(stoi(value));
        }
    }

    int x, y;
    cin >> x >> y;

    // Find and print the LCA
    cout << lca(v, x, y) << endl;

    return 0;
}
