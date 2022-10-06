// contributed by: Ayush Raj  (https://github.com/Ayush0751)
// problem link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode node1 = head;
        ListNode node2 = head;
        ListNode node3 = head.next;
        int count = 0;
        while(node1!=null){
            count++;
            node1 = node1.next;
        }
        int toRemove = count-n+1;
        if(toRemove==1){
            // node2 = node2.next;
            return node3;
        }
        int itr = 2;
        while(node3!=null){
            if(itr == toRemove){
                node2.next = node3.next;
                break;
            }
            else{
            node2 = node2.next;
            node3 = node3.next;
            itr++;
            }
        }
        // head = node2;
        return head;
    }
}