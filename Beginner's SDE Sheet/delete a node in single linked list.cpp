Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(head==NULL)
        return NULL;
    Node* temp = head;
    if(x==1) {
        head = head->next;
        return head;
    }
    int c=1;
    while(c<x-1) {
        temp = temp->next;
        c++;
    }
    Node* next = temp->next;
    temp->next = temp->next->next;
    delete next;
    return head;
}
