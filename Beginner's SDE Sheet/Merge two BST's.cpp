class Solution
{
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    void inorder(Node *root, vector<int> &in) {
        if(root==NULL)
            return;
        inorder(root->left, in);
        in.push_back(root->data);
        inorder(root->right, in);
    }
    
    vector<int> mergeInorder(vector<int> &in1, vector<int> &in2) {
        vector<int> res(in1.size() + in2.size());
        int i=0, j = 0, k=0;
        while(i<in1.size() && j<in2.size()) {
            if(in1[i] < in2[j]) {
                res[k++] = in1[i];
                i++;
            }
            else {
                res[k++] = in2[j];
                j++;
            }
        }
        
        while(i<in1.size()) {
            res[k++] = in1[i];
            i++;
        }
        while(j<in2.size()) {
            res[k++] = in2[j];
            j++;
        }
        return res;
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
        vector<int> in1;
        vector<int> in2;
        inorder(root1, in1);
        inorder(root2, in2);
        vector<int> res = mergeInorder(in1, in2);
        return res;
    }
};
