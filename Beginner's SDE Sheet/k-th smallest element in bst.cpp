class Solution {
  public:
    int solve(Node *root, int K, int& cnt) {
        if(root==NULL)
            return -1;
        
        int left = solve(root->left, K, cnt);
        if(left != -1)
            return left;
        
        cnt++;
        if(cnt == K)
            return root->data;
        
        return solve(root->right, K, cnt);
        
    }
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int cnt = 0;
        int ans = solve(root, K, cnt);
        return ans;
    }
};
