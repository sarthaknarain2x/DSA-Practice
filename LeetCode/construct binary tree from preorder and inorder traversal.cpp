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
    int findPosition(vector<int> in, int ele, int n) {
        for(int i=0; i<n; i++) {
            if(in[i]==ele)
                return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int> preorder, vector<int> inorder, int &preOrderIndex, int inOrdStIndex, int inOrdEndIndex, int n) {
        if(preOrderIndex >= n || inOrdStIndex>inOrdEndIndex) {
            return NULL;
        }
        
        int ele = preorder[preOrderIndex++];
        TreeNode* temp = new TreeNode(ele);
        int posi = findPosition(inorder, ele, n);
        
        temp->left = solve(preorder, inorder, preOrderIndex, inOrdStIndex, posi-1, n);
        temp->right = solve(preorder, inorder, preOrderIndex, posi+1, inOrdEndIndex, n);
        
        return temp;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preOrderIndex = 0, n= preorder.size();
        TreeNode* ans = solve(preorder, inorder, preOrderIndex, 0, n-1, n);
        return ans;
    }
};
