class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        // Your code here
        int size=0;
        Node* temp = head;
        while(temp) {
            temp = temp->next;
            size++;
        }
        
        if(n>size) {
            return -1;
        }
        
        temp = head; 
        int x = size-n;
        while(temp && x>0) {
            temp = temp->next;
            x--;
        }
        return temp->data;
    }
};
