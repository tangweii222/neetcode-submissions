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
    int diameterOfBinaryTree(TreeNode* root) {
        // 切入點：height by Hint2
        // diameter = sum(left height+ right height);
        if(!root) return 0;
        int dia=0;
        treeHeight(root, dia);
        return dia;
    }

    int treeHeight(TreeNode* root, int& diameter){// pass by reference:讓傳入的變數別名變成diameter
        if(!root) return 0;
        int lh = treeHeight(root->left, diameter);
        int rh = treeHeight(root->right, diameter);
        if(lh+rh>diameter){
            diameter = lh+rh;
        }
        return max(lh, rh)+1;
    }
};
