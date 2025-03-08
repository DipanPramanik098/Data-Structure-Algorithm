#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int findOddOccurrence(const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    
    while(low<=high){
        if(low == high) return arr[low];

        int mid = low + (high - low)/2;
        if(mid%2==0){
            if(arr[mid] == arr[mid+1]) low = mid+2;
            else high = mid;
        }else{
            if(arr[mid] == arr[mid-1]) low = mid+1;
            else high = mid-1;
        }
    }
    return -1;
}

int main() {
    // Example: In this sorted array every element appears twice except 7.
    vector<int> arr = {1, 1, 3, 3, 4, 4, 7, 8, 8, 9, 9};
    
    int oddElement = findOddOccurrence(arr);
    cout << "The element with odd occurrences is: " << oddElement << endl;
    
    return 0;
}