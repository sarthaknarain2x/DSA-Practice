int countNodesinLoop(struct Node *head)
{
    // Code here
    if(head==NULL || head->next==NULL)
        return 0;
    
    Node* slow = head;
    Node* fast = head;
    int c=0;
    
    while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            break;
        }
    }
    if(slow!=fast) 
        return 0;
    while(slow->next!=fast) {
        c++;
        slow=slow->next;
    }
    return c+1;
}
