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
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        ListNode* res = head;
        ListNode* tmp = head;
        ListNode* top;
        while(res != nullptr){
            st.push(res);
            res = res->next;
        }

        int n=st.size();// 4
        for(int i=0;i<n/2;i++){
            top = st.top();//
            st.pop();
            tmp = head->next;   //4

            head->next = top;   //2->8
            head=head->next;    //8

            head->next = tmp;   //2>8>4
            head=head->next;    //4
        }
        head->next = nullptr;
    }
};
