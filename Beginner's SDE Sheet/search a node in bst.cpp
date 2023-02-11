// recursive way:
// Function to search a node in BST.
/*bool search(Node* root, int x) {
    // Your code here
    if(root == NULL)
        return false;
    if(root->data == x)
        return true;
    
    if(root->data > x) {
        return search(root->left, x);
    }
    else {
        return search(root->right, x);
    }
}*/

// Iterative way:


// Function to search a node in BST.
bool search(Node* root, int x) {
    // Your code here
    if(root == NULL)
        return false;
    if(root->data == x)
        return true;
    
    if(root->data > x) {
        return search(root->left, x);
    }
    else {
        return search(root->right, x);
    }
}
