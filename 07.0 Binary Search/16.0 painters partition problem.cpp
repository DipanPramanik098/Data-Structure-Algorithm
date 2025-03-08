#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
//User function template for C++

class Solution {
    public:
      int minTime(vector<int>& arr, int k) {
          // code here
          // return minimum time
          int start = INT_MIN, end = 0;
          int ans = -1;
          for(int i=0;i<arr.size();i++){
              start = max(start,arr[i]);
              end+=arr[i];
          }
          while(start<=end){
              int mid = start+(end-start)/2;
              int workers =1, board = 0;
              for(int i=0; i<arr.size();i++){
                  board += arr[i];
                  if(board>mid){
                      workers++;
                      board = arr[i];
                  }
              }
              if(workers <= k){
                  ans = mid;
                  end=mid-1;
              }else start = mid+1;
          }
          return ans;
      }
  };
  
int main(){
    
    return 0;
}