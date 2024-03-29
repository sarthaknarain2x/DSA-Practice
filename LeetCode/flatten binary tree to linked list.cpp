// So what this solution is basically doing is putting the right subtree next to the rightmost node on the left subtree and then making the left subtree the right subtree and then making the left one null.
class Solution {
public:
    void flatten(TreeNode *root) {
		TreeNode*now = root;
		while (now) {
			if(now->left) {
                //Find current node's prenode that links to current node's right subtree
				TreeNode* pre = now->left;
				while(pre->right){
					pre = pre->right;
				}
				pre->right = now->right;
                //Use current node's left subtree to replace its right subtree(original right 
                //subtree is already linked by current node's prenode
				now->right = now->left;
				now->left = NULL;
			}
			now = now->right;
		}
    }
};
