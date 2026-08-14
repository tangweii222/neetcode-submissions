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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* results;
        ListNode dummy(0);
        results = &dummy;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<=list2->val){
                results->next = list1;    
                list1 = list1->next;
            }
            else{
                results->next = list2;
                list2 = list2->next;
            }
            results = results->next;
        }
        if(list1==nullptr){
            results->next = list2;
        }
        else if(list2 == nullptr){
            results->next = list1;
        }
        return dummy.next;
    }
};
