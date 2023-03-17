// BETTER O(1) SPACE SOLN:
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};

// JAVA Solution Using HashMap
// public class Solution {
//     public boolean hasCycle(ListNode head) {
//         HashSet<ListNode> set = new HashSet<ListNode>();
//         if(head==null || head.next==null)
//             return false;
        
//         while(head != null) {
//             if(set.contains(head)) {
//                 return true;
//             }
//             else {
//                 set.add(head);
//             }
//             head = head.next;
//         }
//         return false;
//     }
// }
