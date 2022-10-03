// // https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//         ListNode* cur=head;
//         ListNode* temp=head;
//         int count=0;
//         while(cur!=NULL){
//             count++;
//             cur=cur->next;
//         }
//         long long ans=0;
        
//         while(temp!=NULL){
//             count--;
//             // cout<<count;
//             long long value=pow(2,count);
//             ans+=temp->val*value;
//             temp=temp->next;
//         }
//         return ans;
//     }
// };

