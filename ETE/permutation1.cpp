#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3};

    
    do {
        for (int value : vec) {
            cout << value << " ";
        }
       cout <<endl;
    } while (next_permutation(vec.begin(), vec.end()));

    

    return 0;
}