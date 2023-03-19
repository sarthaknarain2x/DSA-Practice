class Solution {
    public ListNode sortList(ListNode head) {
        int n = 0;
        ListNode p = head;
        while(p != null) {
            n++;
            p = p.next;
        }
        int[] a = new int[n];
        int i = 0;
        p = head;
        while(p != null) {
            a[i++] = p.val;
            p = p.next;
        }
        Arrays.sort(a);
        p = head;
        i = 0;
        while (p != null) {
            p.val = a[i++];
            p = p.next;
        }
        return head;
    }
}
