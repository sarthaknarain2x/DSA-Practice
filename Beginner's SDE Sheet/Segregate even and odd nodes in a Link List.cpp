class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* e = new Node(-1);
        Node* o = new Node(-1);
        Node* even = e;
        Node* odd = o;
        
        while(head!=NULL) {
            if(head->data % 2 == 0) {
                e->next = head;
                e = e->next;
            }
            else {
                o->next = head;
                o = o->next;
            }
            head = head->next;
        }
        e->next = odd->next;
        o->next = NULL;
        return even->next;
    }
};
