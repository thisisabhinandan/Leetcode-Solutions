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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left=head; ListNode* right=head; ListNode* fast=head; 
        if(head->next==NULL) return head;
        for(int i=0;i<k-1;i++)
        {
            left=left->next; 
        }
        ListNode *temp=left; 
        while(left->next!=NULL)
        {
            right=right->next; 
            left=left->next;
        }
        swap(temp->val,right->val); 
        return head;
        
    }
};