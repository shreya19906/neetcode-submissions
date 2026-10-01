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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        priority_queue<TreeNode*> pq;
        pq.push(root);
        while(pq.size()) {
            TreeNode * t = pq.top();
            pq.pop();
            TreeNode * left = t->left;
            TreeNode * right = t->right;
            t->left=NULL;
            t->right=NULL;
            if(left)
               { t->right = left; pq.push(left);}
            if(right) {
                t->left = right; pq.push(right);
            }
        }

        return root;
    }
};
