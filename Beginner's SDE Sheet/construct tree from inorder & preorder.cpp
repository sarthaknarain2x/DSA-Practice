//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int findPosition(int in[], int ele, int inOrdStIndex, int inOrdEndIndex, int n) {
        for(int i=inOrdStIndex; i<=inOrdEndIndex; i++) {
            if(in[i]==ele)
                return i;
        }
        return -1;
    }
    Node* solve(int in[], int pre[], int &preOrderIndex, int inOrdStIndex, int inOrdEndIndex, int n) {
        
        if(preOrderIndex >= n || inOrdStIndex>inOrdEndIndex) {
            return NULL;
        }
        
        int ele = pre[preOrderIndex++];
        Node* temp = new Node(ele);
        int posi = findPosition(in, ele, inOrdStIndex, inOrdEndIndex, n);
        
        temp->left = solve(in, pre, preOrderIndex, inOrdStIndex, posi-1, n);
        temp->right = solve(in, pre, preOrderIndex, posi+1, inOrdEndIndex, n);
        
        return temp;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preOrderIndex = 0;
        Node* ans = solve(in, pre, preOrderIndex, 0, n-1, n);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends
