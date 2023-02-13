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
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inorderTrav(root, arr);
        int start = 0, end = arr.size()-1;
        while(start < end) {
            if(arr[start] + arr[end] == k)
                return true;
            else if(arr[start] + arr[end] < k)
                start++;
            else
                end--;
        }
        return false;
    }
};
