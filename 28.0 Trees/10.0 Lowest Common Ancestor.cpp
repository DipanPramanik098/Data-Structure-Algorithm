#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // base
        if(root == NULL) return NULL;

        if(root->val == p->val) return p;
        if(root->val == q->val) return q;

        TreeNode* lans = lowestCommonAncestor(root->left,p,q);
        TreeNode* rans = lowestCommonAncestor(root->right,p,q);

        if(lans == NULL && rans == NULL) return NULL;
        else if(lans != NULL && rans == NULL) return lans;
        else if(lans == NULL && rans != NULL) return rans;
        // (lans != NULL && rans != NULL) return root;
        else return root;
    }
};
int main(){
    
    return 0;
}