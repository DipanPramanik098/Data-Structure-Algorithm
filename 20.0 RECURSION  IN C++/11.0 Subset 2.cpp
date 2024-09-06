#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    void subseq(vector<int>&nums, set < vector < int >> &res, vector<int>temp, int i){
        // base case
        if(i >= nums.size()){
            res.insert(temp);
            return;
        }

        // exclude
        subseq(nums,res,temp,i+1);

        // include
        temp.push_back(nums[i]);
        subseq(nums,res,temp,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        set < vector < int >> res;
        subseq(nums,res , temp, 0);
        for (auto it = res.begin(); it != res.end(); it++) {
        ans.push_back( * it);
        }
        return ans;
    }
};
int main(){
    
    return 0;
}