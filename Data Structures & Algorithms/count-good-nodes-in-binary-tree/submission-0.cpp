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
    void countGoodNodes(TreeNode* root, int max, int &count) {
        if(!root) return;
        if(root->val >= max)
        {
            max = root->val; 
            count++;
        }
    
        
        countGoodNodes(root->left, max, count); countGoodNodes(root->right, max,count);

    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int count = 0;
         countGoodNodes(root, -101, count);
         return count;
    }
};
