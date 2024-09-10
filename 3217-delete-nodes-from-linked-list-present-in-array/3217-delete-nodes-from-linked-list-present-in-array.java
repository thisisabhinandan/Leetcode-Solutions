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
    public ListNode modifiedList(int[] nums, ListNode head) {
        HashSet<Integer> st=new HashSet<>();
        for(int i=0;i<nums.length;i++)
        {
            st.add(nums[i]);
        }
        while(head!=null&&st.contains(head.val))
        {
            head=head.next; 
        }
        ListNode curr=head; 
        while(curr!=null&&curr.next!=null)
        {
            if(st.contains(curr.next.val))
            {
                curr.next=curr.next.next; 
            }
            else curr=curr.next; 
        }
        return head;
    }
}