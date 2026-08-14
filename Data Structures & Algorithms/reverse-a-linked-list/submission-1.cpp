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
    ListNode* reverseList(ListNode* head) {
        // ex: 
        // head.next= ptr(0)
        // head.next.next=ptr(1)
        ListNode* prev;
        // ListNode* nn;
        ListNode* n;
        prev=nullptr;
        while(head != nullptr){
            // nn = head->next->next;
            n = head->next;
            head->next=prev;
            prev=head;
            head=n;
        }
        return prev;
    }
};
