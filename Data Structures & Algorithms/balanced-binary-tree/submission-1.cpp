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
    int flag = 0;
    int maxDepth(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        
        int diff = 0;
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        diff = abs(l-r);
        cout << l << " " << r << " " << diff << endl;
        if(diff > 1){
            flag = 1;
        }
        if(root->left != nullptr) isBalanced(root->left);
        if(root->right != nullptr) isBalanced(root->right);
        return flag == 0;
    }
};
