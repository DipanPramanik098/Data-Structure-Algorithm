#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        while(s<=e){
            int mid = e + (s-e)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])  return mid;
            else if(arr[mid]>arr[mid-1]) s= mid +1;
            else e = mid -1;
        }
        return -1;
    }
};
int main(){
    
    return 0;
}