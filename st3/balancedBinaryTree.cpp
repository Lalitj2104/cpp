#include <iostream>
#include <vector>
#include <cmath> // For abs function

using namespace std;

int getHeight(vector<int> &arr, int index) {
    if (index >= arr.size() || arr[index] == -1) {
        return 0;
    }
    return 1 + max(getHeight(arr, 2 * index + 1), getHeight(arr, 2 * index + 2));
}

bool isBalanced(vector<int> &arr, int index) {
    if (index >= arr.size() || arr[index] == -1)
        return true;
    int left = getHeight(arr, 2 * index + 1);
    int right = getHeight(arr, 2 * index + 2);

    if (abs(left - right) > 1) {
        return false;
    }

    return (isBalanced(arr, 2 * index + 1) && isBalanced(arr, 2 * index + 2));
}


bool balance(vector<int> &arr) {
    return isBalanced(arr, 0);
}


int main() {
    vector<int> arr = {1, 2, 3, 4, -1, -1, -1};

    if (balance(arr)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
