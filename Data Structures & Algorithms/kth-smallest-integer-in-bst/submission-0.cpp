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
    TreeNode* getEl(TreeNode* root, int &k, int n, TreeNode* &node) {
        if(!root) return root;
        getEl(root->left, k, n, node);
        k++;
        if(k == n) { node=root; return root;}
        if(root->right)
        getEl(root->right, k, n, node);
    }
    int kthSmallest(TreeNode* root, int k) {
        int t = 0;
        TreeNode* x = new TreeNode();
        getEl(root, t, k, x);
        if(x) return x->val;
        return 0;
    }
};
