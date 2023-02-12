Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   while(root!=NULL) {
        if(root->data < n1 && root->data < n2) {
            root = root->right;
        }
        else if(root->data > n1 && root->data > n2) {
            root = root->left;
        }
        else
            break;
    }
        return root;
}
