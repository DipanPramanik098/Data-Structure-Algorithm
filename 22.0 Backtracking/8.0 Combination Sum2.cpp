#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
void combination_helper(vector<int>& candidates, int target, vector<int>&v, vector<vector<int>>&ans, int index){
    // base case
    if(target==0){
      ans.push_back(v);
      return;
    }
    if(target<0) return;
    
    for(int i = index; i<candidates.size();i++){
        if(i>index && candidates[i] == candidates[i-1]){
            continue;
        }
        v.push_back(candidates[i]);
        combination_helper(candidates, target- candidates[i], v, ans, i+1);
        v.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>v;
        combination_helper(candidates, target, v, ans , 0);
        // set<vector<int>>st;
        // for(auto i: ans){
        //     st.insert(i);
        // }
        // ans.clear();
        // for(auto i: st){
        //     ans.push_back(i);
        // }

        return ans;
    }
};
int main(){
    
    return 0;
}