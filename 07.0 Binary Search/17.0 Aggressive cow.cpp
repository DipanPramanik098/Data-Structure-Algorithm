#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
// User function Template for C++

class Solution {
    public:
    
        int solve(int n, int k, vector<int> &stalls) {
        
            // Write your code here
            int start = 1, end,ans;
            sort(stalls.begin(),stalls.end());
            end = stalls[n-1] - stalls[0];
            
            while(start<=end){
                int mid = start + (end-start)/2;
                
                int position =stalls[0], cowCount = 1;
                for(int i =1; i<n; i++){
                    if(position + mid <= stalls[i]){
                        cowCount++;
                        position = stalls[i];
                    }
                }
                if(cowCount < k) end = mid -1;
                else{
                    ans = mid;
                    start = mid + 1;
                }
            }
            return ans;
        }
    };
int main(){
    
    return 0;
}