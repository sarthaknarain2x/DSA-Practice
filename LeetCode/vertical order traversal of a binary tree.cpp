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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // map of verticals(HD), level, nodes. Multiset used since there are multiple nodes which can have the same value.
        map <int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int,int>>> q; // Node, vertical, level
        q.push({root, {0,0}}); // root, with vertical 0 & level 0
        while(!q.empty()) {
            auto fr = q.front();
            q.pop();
            TreeNode* node = fr.first;
            int vert = fr.second.first;
            int lvl = fr.second.second;
            nodes[vert][lvl].insert(node->val);

            if(node->left)
                q.push({node->left, {vert-1, lvl+1}});
            if(node->right){
                q.push({node->right, {vert+1, lvl+1}});
            }
        }
            vector<vector<int>> ans;
            for(auto x : nodes) {
                vector<int> col;
                for(auto y : x.second) {
                    col.insert(col.end(), y.second.begin(), y.second.end());
                }
                ans.push_back(col);
            }
        return ans;
    }
};
