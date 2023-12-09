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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return ;
        }

        // finding middle of LL
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reversing the LL from middle till end
        ListNode* secondHalfStarting = slow->next;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        ListNode* curr = secondHalfStarting;

        while(curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        slow->next = NULL;

        // reorder the elements
        //For each node in the first half, insert a node from the second half right after it.
        curr = head;
        while (prev != NULL) {
            forward = curr->next; // Temporarily storing the next node in the first half (since it will be overwritten).
            curr->next = prev; // Setting the next node in the first half to be the first node in the second half.
            prev = prev->next; // Moving the first node in the second half to its next node (effectively removing it from the second half).
            curr->next->next = forward; // setting the next pointer of the node we just inserted from the second half to point to the next node in the first half.
            curr = forward; // Restoring the next node in the first half from the temporary storage.
        }
    }
};
