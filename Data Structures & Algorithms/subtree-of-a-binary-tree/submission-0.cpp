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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool l=0;
        bool r=0;
        while(root != nullptr){
            if(sameTree(root, subRoot)) return true;

            if(root->left){
                l = isSubtree(root->left, subRoot);
            }
            if(root->right){
                r = isSubtree(root->right, subRoot);
            }
            return l || r;
        }
        return false;
    }

    bool sameTree(TreeNode* root1, TreeNode* root2){
        if(!root1 && !root2) return true;
        if(!root1 || !root2) return false;
        if(root1->val == root2->val){
            if(!sameTree(root1->left, root2->left)) return false;
            if(!sameTree(root1->right, root2->right)) return false;
            return true;
        }
        return false;
    }
};
