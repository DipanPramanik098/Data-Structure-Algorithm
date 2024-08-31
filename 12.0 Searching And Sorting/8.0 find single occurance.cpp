#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
   int s =0 ;int e = arr.size()-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(s==e) return arr[s];
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]) s=mid+2;
            else e=mid;
        }else{
            if(arr[mid]==arr[mid-1]) s = mid +1;
            else e = mid -1;
        }
    }
    return -1;
    }
};
int main(){
    
    return 0;
}