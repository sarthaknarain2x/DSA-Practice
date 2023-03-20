class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* temp = head;
        int zeroCount=0, oneCount=0, twoCount=0;
        while(temp) {
            if(temp->data == 0)
                zeroCount++;
            else if(temp->data == 1)
                oneCount++;
            else if(temp->data == 2)
                twoCount++;
            temp = temp->next;
        }
        
        temp = head;
        while(temp) {
            if(zeroCount>0) {
                temp->data = 0;
                zeroCount--;
            }
            else if(oneCount>0) {
                temp->data = 1;
                oneCount--;
            }
            else if(twoCount>0) {
                temp->data = 2;
                twoCount--;
            }
            temp = temp->next;
        }
        return head;
    }
};
