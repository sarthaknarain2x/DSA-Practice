/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(); // get a dummy node
        dummy->next = head; // point dummy to head

        ListNode* slow = dummy; // get a slow pointer pointed to dummy
        ListNode* fast = dummy; // get a fast pointer pointed to dummy

        for(int i=0; i<n; i++) {
            fast = fast -> next;//get the fast pointer to nth node to be deleted
        }
        while(fast->next!=NULL) { // till the fast doesn't reaches the end of ll
            slow = slow->next; // keep moving slow
            fast = fast->next; // keep moving fast
        }
        // slow's next will at last point to the nth node to be deleted 
        slow->next = slow->next->next; // hence point it to slow's next next
        return dummy->next; // return dummy node
    }
};
