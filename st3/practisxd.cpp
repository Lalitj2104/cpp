#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void printLevelOrder(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0)
        return;

    queue<int> q;
    q.push(0); // Start from the root

    while (!q.empty()) {
        int levelSize = q.size();
        for (int i = 0; i < levelSize; i++) {
            int index = q.front();
            q.pop();
            cout << arr[index] << " ";
            // Push the children of the current node if they exist
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            if (leftChild < n)
                q.push(leftChild);
            if (rightChild < n)
                q.push(rightChild);
        }
        cout << endl; // Move to the next level
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    cout << "Level Order Traversal of the array:" << endl;
    printLevelOrder(arr);
    return 0;
}