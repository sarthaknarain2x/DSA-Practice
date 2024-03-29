/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0, len2=0;
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        // find length of both LL
        while(ptr1) {
            len1++;
            ptr1 = ptr1->next;
        }
        while(ptr2) {
            len2++;
            ptr2 = ptr2->next;
        }
        int diff = abs(len1-len2); // calculate the length diff

        // move the longer list by diff steps
        if(len1 > len2) {
			while(diff) {
				headA = headA -> next;
				diff--;
			}
		}
		else{
			while(diff){
				headB = headB -> next;
				diff--;
			}
		}
        // now find the intersecting node
        while(headA && headB) {
            if(headA==headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
