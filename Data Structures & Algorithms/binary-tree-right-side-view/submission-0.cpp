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
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> levels;
        queue<TreeNode*> q;
        vector<int> ans;
        if(root == nullptr){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            vector<int> level;
            for(int i=0; i<s; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
                level.push_back(node->val);
            }
            levels.push_back(level);
        }

        
        for(auto l: levels){
            int s = l.size();
            ans.push_back(l[s-1]);
        }
        return ans;
        
    }
};
