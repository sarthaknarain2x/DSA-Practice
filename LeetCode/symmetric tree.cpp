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
    bool solver(TreeNode* left, TreeNode* right) {
        if(left==NULL || right==NULL)
            return(left == right);

        if(left->val!=right->val)
            return false;
        
        return(solver(left->left, right->right)&&solver(left->right, right->left));
    }
    bool isSymmetric(TreeNode* root) {
        return (root==NULL || solver(root->left, root->right));
    }
};