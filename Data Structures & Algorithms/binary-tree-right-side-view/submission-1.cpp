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
    vector<int> rightSideView(TreeNode* root) {
        // 每一個level都有一個return
        // 先以right sub tree為主
        // BFS?
        vector<int> res;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty() && root){
            int level_count = que.size();
            for(int i=0; i<level_count; i++){
                TreeNode* tmp = que.front();
                if(tmp->left) que.push(tmp->left);
                if(tmp->right) que.push(tmp->right);
                que.pop();
                if((i+1)==level_count){
                    res.push_back(tmp->val);
                }
            }
        }
        return res;
    }
};
