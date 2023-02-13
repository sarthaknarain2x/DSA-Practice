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
    void inorderTrav(TreeNode* root, vector<int>& arr) {
        if(root==NULL)
            return;
        
        inorderTrav(root->left, arr);
        arr.push_back(root->val);
        inorderTrav(root->right, arr);
    }

    TreeNode* inorderToBST(int start, int end, vector<int>& arr) {
        // base case
        if(start>end)
            return NULL;
        int mid = (start + end)/2;
        TreeNode* temp = new TreeNode(arr[mid]);
        temp->left = inorderToBST(start, mid-1, arr);
        temp->right = inorderToBST(mid+1, end, arr);
        return temp; 
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inorderTrav(root, arr);

        return inorderToBST(0, arr.size()-1, arr);
    }
};
