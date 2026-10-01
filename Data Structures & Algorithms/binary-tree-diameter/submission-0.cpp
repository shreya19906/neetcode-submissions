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
   int ht(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(ht(root->left), ht(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
       
       if(!root) return 0;
       int hl = ht(root->left);
       int hr = ht(root->right);
       

       return max(hl + hr, diameterOfBinaryTree(root->left) + diameterOfBinaryTree(root->right));
    }

};
