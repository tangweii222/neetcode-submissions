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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        bool results=1;
        treeHeight(root, results);
        return results;
    }

    int treeHeight(TreeNode* root, bool& r){
        if(!root) return 0;
        int lh = treeHeight(root->left, r);
        int rh = treeHeight(root->right, r);
        if(abs(lh-rh)>1){
            r = 0;
        }
        return max(lh, rh)+1;
    }
};
