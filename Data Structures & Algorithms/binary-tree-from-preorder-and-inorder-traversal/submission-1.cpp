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
    TreeNode* build(vector<int>& preorder, int inStart, int inEnd, int preStart, int preEnd, map<int, int> mp) {
        if(inStart > inEnd || preStart > preEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[preStart]);
        int rootIndex = mp[root->val];
        int numLeft = rootIndex - inStart;
        root->left = build(preorder, inStart, rootIndex-1 , preStart+1, preStart + numLeft, mp);
        root->right = build(preorder, rootIndex + 1, inEnd, preStart + numLeft + 1, preEnd, mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        int i =0;
        for(auto it: inorder)
            mp[it] = i++;
        return build(preorder, 0, i, 0, preorder.size()-1, mp);
    }
};
