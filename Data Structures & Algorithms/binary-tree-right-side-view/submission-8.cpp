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
    vector<int> lastNodeOnLevel(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<TreeNode*, int>> q;
        q.push(pair<TreeNode*,int> (root, 0));
        while(q.size()) {
            pair<TreeNode*, int> t = q.front();
            q.pop();
            if(t.second+1 > ans.size())
                ans.push_back({t.first->val});
            else
                ans[t.second].push_back(t.first->val);
            if(t.first->left)
                q.push(pair<TreeNode*,int>(t.first->left, t.second+1));
            if(t.first->right)
                q.push(pair<TreeNode*,int>(t.first->right, t.second+1));
        }
        vector<int> nodes;
        for(auto it: ans)
            nodes.push_back(it[it.size()-1]);
        return nodes;

    }
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        return lastNodeOnLevel(root);
    }
};
