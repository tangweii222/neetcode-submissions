/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // BFS
        // root進queue
        // left, right enqueu, root dequeue
        
        // queue push 1st樹
        // pop 2nd樹 若queue為空return true

        std::queue<TreeNode*> queue1,queue2;
        queue1.push(p);//1
        queue2.push(q);
        while(!queue1.empty() && !queue2.empty()){
            TreeNode* tmp1 = queue1.front();
            TreeNode* tmp2 = queue2.front();
            // 攔截
            // 兩個都是nullptr > continue
            // 其一是nullptr > return false
            if(!tmp1 && !tmp2){
                queue1.pop();
                queue2.pop();
                continue;
            }
            if(!tmp1 || !tmp2){
                return false;
            }
            // 可push nullptr, 但next lopp不可以解nullptr,所以前面要攔截tmp
            queue1.push(tmp1->left);
            queue1.push(tmp1->right);

            queue2.push(tmp2->left);
            queue2.push(tmp2->right);

            if(queue1.front()->val != queue2.front()->val){
                return false;
            }
            queue1.pop();
            queue2.pop();
        }
        return true;
    }
};
