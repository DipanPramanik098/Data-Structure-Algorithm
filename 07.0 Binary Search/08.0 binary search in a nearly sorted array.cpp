#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
// Function to perform binary search in a nearly sorted array
int binarySearchNearlySorted(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check mid element
        if (arr[mid] == target)
            return mid;
        
        // Check mid - 1 (if within bounds)
        if (mid - 1 >= left && arr[mid - 1] == target)
            return mid - 1;
        
        // Check mid + 1 (if within bounds)
        if (mid + 1 <= right && arr[mid + 1] == target)
            return mid + 1;

        // If target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 2;
        else // Ignore right half
            right = mid - 2;
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 40;

    int index = binarySearchNearlySorted(arr, n, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
