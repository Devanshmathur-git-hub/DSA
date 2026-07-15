class Solution {
    public ListNode swapPairs(ListNode head) {

        // Base case: 0 or 1 node left
        if (head == null || head.next == null) {
            return head;
        }

        ListNode temp = head.next;

        // Recursively swap the remaining list
        head.next = swapPairs(temp.next);

        // Complete the current swap
        temp.next = head;

        // Return the new head of this pair
        return temp;
    }
}