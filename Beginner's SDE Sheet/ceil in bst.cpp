/*
if key is greater than root data we can't do anything just simply move to right 
and if key is smaller than root data then simply store this root data and move to left.
*/
int findCeil(Node* root, int input) {
    int c = -1;
    while(root){
        if(input > root->data){
            root = root->right;
        }
        else{
            c = root->data;
            root = root->left;
        }
    }
    return c;
}
