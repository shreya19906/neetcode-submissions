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

class Solution {
public:
    pair<bool,int> check(TreeNode * root) {
        if(!root) return pair<bool,int> (true, 0);
        pair<bool,int> hr = check(root->right);
        pair<bool,int> hl = check(root->left);

        return pair<bool,int>( hl.first && hr.first && abs(hl.second-hr.second)<=1, max(hl.second, hr.second) + 1);
    }

    bool isBalanced(TreeNode* root) {
        if(!root) return true;
       return check(root).first;
    }
};
