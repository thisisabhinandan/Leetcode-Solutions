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
    public int gcd(int a , int b)
    {
        if(b==0) return a;
        return gcd(b,a%b);
    }
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        if(head.next==null) return head;
        ListNode node1=head;
        ListNode node2=head.next;
        while(node2!=null)
        {
            int val1=node1.val;
            int val2=node2.val; 
            int gcdval=gcd(val1,val2);
            ListNode gcdvalnode=new ListNode(gcdval); 
            node1.next=gcdvalnode; 
            gcdvalnode.next=node2; 
            node1=node2; 
            node2=node2.next; 
            
        }
        return head;
    }
}