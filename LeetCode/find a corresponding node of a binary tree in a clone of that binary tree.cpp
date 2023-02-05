/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if( original == NULL ){
            // Base case aka stop condition
            // empty tree or empty node
            return NULL;
        }
        
        // General case:
        if( original == target ){
            // current original node is target, so is cloned
            return cloned;
        }
        
        // Either left subtree has target, or right subtree has target
        TreeNode *left =  getTargetCopy(original->left, cloned->left, target);
        
        if( left != NULL ){ 
            return left; 
        
        }else{
            return getTargetCopy(original->right, cloned->right, target);
        }        
    }
};  
