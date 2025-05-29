// Input: head = [1,2,6,3,4,5,6], val = 6
// Output: [1,2,3,4,5]
// Example 2:
// Input: head = [], val = 1
// Output: []
// Example 3:
// Input: head = [7,7,7,7], val = 7
// Output: []


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



// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
       
//         while(head && head->val == val)
//         {
//             head=head->next;
//         }
//          if(!head)
//         {
//             return head;
//         }
//         ListNode* temp=head;
//         while(temp && temp->next)
//         {
            
//             if(temp->next->val==val)
//             {
//                 temp->next=temp->next->next;
//             }
//             else{
//               temp=temp->next;
//             }
            
//         }
//         return head;
//     }
// };