// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/


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
        ListNode* cur=head;
          ListNode* temp=head;
        int i=1;
        while(i<k){
            i++;
            cur=cur->next;
            temp=temp->next;
        }
        // cout<<cur->val<<endl;
          ListNode* fast=head;
        while(temp->next!=NULL){
            fast=fast->next;
            temp=temp->next;
        }
        swap(fast->val,cur->val);
        return head;
    }
};