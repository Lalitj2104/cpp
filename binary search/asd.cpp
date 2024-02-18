#include <iostream>
#include <climits>
using namespace std;

int findClosest(int arr[], int n, int target) {
  // Initialize the minimum difference and closest element
  int minDiff = INT_MAX;
  int closestElement = -1;

  // Loop through the array
  for (int i = 0; i < n; i++) {
    // Calculate the absolute difference between the current element and the target
    int diff = abs(arr[i] - target);

    // Update the minimum difference and closest element if necessary
    if (diff < minDiff) {
      minDiff = diff;
      closestElement = arr[i];
    }
  }

  // Return the closest element
  return closestElement;
}

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of the array:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int target;
  cout << "Enter the target number: ";
  cin >> target;

  int closest = findClosest(arr, n, target);

  if (closest != -1) {
    cout << "The closest element to " << target << " is " << closest << endl;
  } else {
    cout << "No element in the array is close to " << target << endl;
  }

  return 0;
}
