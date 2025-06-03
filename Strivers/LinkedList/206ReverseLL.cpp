// Example 1:
// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]
// Example 2:
// Input: head = [1,2]
// Output: [2,1]
// Example 3:
// Input: head = []
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
//     ListNode* reverseList(ListNode* head) {
//         ListNode* temp=head;
//         ListNode*past=nullptr;
       
//         while(temp)
//         {
//            ListNode* rev = new ListNode(temp->val);
//            rev->next=past;
//            past=rev;
//            temp=temp->next;
//            if(!temp)
//            {
//                return rev;
//            }
//         }
//         return head;
//     }
// };