#include <iostream>
using namespace std;

int findMissingElement(int arr[], int n) {
    int left = 0, right = n - 1;
    int firstElement = arr[0];

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int expectedValue = firstElement + mid;

        // If the expected value does not match the actual value, the missing number is in the left half
        if (arr[mid] != expectedValue) {
            right = mid - 1;
        } else {
            left = mid + 1; // Move to the right half
        }
    }
    return firstElement + left; // The missing number
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8}; // Missing 5
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing element: " << findMissingElement(arr, n) << endl;

    return 0;
}
