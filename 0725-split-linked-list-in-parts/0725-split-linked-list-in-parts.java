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
    public ListNode[] splitListToParts(ListNode head, int k) {
        ListNode[] ans=new ListNode[k]; 
        ListNode curr=head;
        int len=0; 
        while(curr!=null)
        {
            curr=curr.next;
            len++; 
        }
        int size=len/k;
        int mod=len%k; 
        curr=head;
        for(int i=0;i<k&&curr!=null;i++)
        {
            ans[i]=curr; 
            int partsize=size; 
            if(mod!=0)
            {
                partsize++; 
                mod--; 
            }
            for(int j=1;j<partsize;j++)
            {
                curr=curr.next; 
            }
            ListNode nextpart=curr.next;
            curr.next=null;
            curr=nextpart; 
        }
        return ans;
    }
}