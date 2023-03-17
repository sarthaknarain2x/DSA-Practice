class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* ptr = head;

        while(fast->next!=NULL && fast->next->next!=NULL) {
            // keep moving slow and fast until they collide
            slow = slow->next; // slow by one
            fast = fast->next->next; // fast by two
            if(slow==fast) {    // after they have collided
                while(ptr!=slow) {   
                    slow = slow->next; //keep moving the slow as well as the 
                    ptr = ptr->next; //dummy ptr till both of them don't collide
                }
                return ptr;
            }
        }
        return NULL;
    }
};
