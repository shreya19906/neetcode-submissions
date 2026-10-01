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
    void print(queue<pair<TreeNode*, int>> pq) {
        //   cout<<endl;
        // while(pq.size()) {
        //     cout<<pq.top().first->val<<" ";
        //     pq.remove();
        // }
        // cout<<endl;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
     vector<vector<int>> ans;
     if(!root) return ans;
     queue<pair<TreeNode*, int>> pq;
        pq.push(pair<TreeNode*, int>(root, 0));
    print(pq);
    while(pq.size()) {
        pair<TreeNode*,int> t = pq.front();
        pq.pop();
        print(pq);
        if(t.second + 1 > ans.size())
            ans.push_back({t.first->val});
        else
            ans[t.second].push_back(t.first->val);
        
        if(t.first->left)
            pq.push(pair<TreeNode*, int> (t.first->left, t.second+1));
        if(t.first->right)
            pq.push(pair<TreeNode*, int> (t.first->right, t.second+1));
            cout<<"after push "<<endl;
            print(pq);
    }
    return ans;

    }
};
