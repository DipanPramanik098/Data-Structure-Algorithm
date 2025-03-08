#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int ans=0;
            for(int i=0;i<nums.size(); i++)
            {
                ans^=nums[i];
            }
            return ans;
        }
    };
int main(){
    
    return 0;
}