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
    int ans = 0;
    int maxDepth(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr)
            return 0;
            
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        ans = max(ans, l+r);
        if(root->left != nullptr) diameterOfBinaryTree(root->left);
        if(root->right != nullptr) diameterOfBinaryTree(root->right);
        return ans;
        
    }
};
