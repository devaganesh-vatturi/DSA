// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.
// Example 2:
// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 

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
//     ListNode* middleNode(ListNode* head) {
        
//         ListNode* temp=head;
//         int c=0;
//         while(temp)
//         {
//             temp=temp->next;
//             c++;
//         }
       
//         c=(c/2)+1;
//         int pnt=1;
//         temp=head;
//         while(c>pnt)
//         {
//            temp=temp->next;
//            pnt++;
//         }
//         return temp;
//     }

// };