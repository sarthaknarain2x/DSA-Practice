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
    int findPosition(vector<int> inorder, int ele, int n) {
        for(int i=0; i<n; i++) {
            if(inorder[i]==ele)
                return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int> inorder, vector<int> postorder, int &postOrderIndex, int inOrdStIndex, int inOrdEndIndex, int n) {
        if(postOrderIndex < 0 || inOrdStIndex>inOrdEndIndex) {
            return NULL;
        }
        
        int ele = postorder[postOrderIndex--];
        TreeNode* temp = new TreeNode(ele);
        int posi = findPosition(inorder, ele, n);
        
        temp->right = solve(inorder, postorder,postOrderIndex, posi+1, inOrdEndIndex, n);
        temp->left = solve(inorder, postorder, postOrderIndex, inOrdStIndex, posi-1, n);
        
        return temp;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n= postorder.size(), postOrderIndex = n-1; 
        TreeNode* ans = solve(inorder, postorder, postOrderIndex, 0, n-1, n);
        return ans;
    }
};
