class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        if(head == NULL)
            return false;
        if(head->data == key)
            return true;
        Node* temp = head;
        while(temp!=NULL) {
            if(temp->data == key) {
                return true;
                break;
            }
            temp = temp->next;
        }
        return false;
    }
};
