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
    queue<TreeNode*> q;
public:
    void swap(TreeNode * &a , TreeNode * &b) {
        TreeNode *temp = a;
        a = b;
        b = temp;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
       q.push(root);
       while(!q.empty()) {
            TreeNode *curr = q.front();
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
            swap(curr->left, curr->right);
            q.pop();
       }
       return root;
    }
};
