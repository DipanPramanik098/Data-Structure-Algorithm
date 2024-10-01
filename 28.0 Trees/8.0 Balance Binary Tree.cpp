#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
    bool isBalanced(TreeNode *root)
    {
        if (root == NULL)
            return true;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        bool ans = (abs(leftHeight - rightHeight) <= 1);
        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        if (ans && leftAns && rightAns)
            return true;
        return false;
    }
};
int main()
{

    return 0;
}