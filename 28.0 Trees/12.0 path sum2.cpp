#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

    class Solution {
public:
    void solve(TreeNode* root,int targetSum,int currSum,vector<int>&path,vector<vector<int>>&ans){
        // base case
        if(root == NULL){
            return;
        }
        // leaf node
        if(root -> left == NULL && root->right == NULL){
            // include leaf node in the sum
            path.push_back(root->val);
            currSum += root->val;
            if(currSum == targetSum){
                ans.push_back(path);
            }
            path.pop_back();
            currSum -= root->val;
            return;
        }
        // include current node
        path.push_back(root->val);
        currSum += root->val;
        solve(root->left,targetSum,currSum,path,ans);
        solve(root->right,targetSum,currSum,path,ans);
        // backtrack due to by reference
        path.pop_back();
        currSum -= root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        int sum = 0;
        vector<int>target;
        solve(root,targetSum,sum,target,ans);
        return ans;
    }
};
int main(){
    
    return 0;
}
