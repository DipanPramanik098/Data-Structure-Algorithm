#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int s = 0, e= arr.size()-1;
            while(s<=e){
                int mid = s+(e-s)/2;
                if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
                else if(arr[mid]>arr[mid+1]) e = mid-1;
                else s = mid+1;
            }
            return -1;
        }
    };
int main(){
    
    return 0;
}