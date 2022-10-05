// // https://leetcode.com/problems/intersection-of-two-linked-lists/



// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//   if(headA == NULL || headB == NULL) { //incase of empty linkedlists
//         return NULL; 
//     }
    
//     ListNode *currentHeadA = headA, *currentHeadB = headB;
    
//     while(currentHeadA != currentHeadB){ 
        
//         if(currentHeadA == NULL) { //set current head of A to headB upon end of traversal
//             currentHeadA = headB;   //eventually current heads will meet
//         } else {
//             currentHeadA = currentHeadA->next;
//         }
        
//         if(currentHeadB == NULL) {
//             currentHeadB = headA;
//         } else {
//             currentHeadB = currentHeadB->next;
//         }
//     }
    
//     return currentHeadA;
//     } 
// };