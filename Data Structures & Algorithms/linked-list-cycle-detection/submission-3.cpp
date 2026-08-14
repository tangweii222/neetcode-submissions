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
    bool hasCycle(ListNode* head) {
        std::unordered_map<ListNode*, int> pairs;
        int idx=0;
        int gap=0;
        while(head != nullptr){
            //沒有移動到null表示一直在跑
            if(pairs.find(head) == pairs.end()){
                // 第一次遇到該val
                pairs[head] = idx;
                idx++;
                head = head->next;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
