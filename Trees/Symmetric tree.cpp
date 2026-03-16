// the qn is to check weather the left is mirror of right or not. 
// use  a bool fn and if both are null return true and if any one of both is null or if both values are different return false;

// rerurn the recursion by giving left node of left tree and right node of right tree AND right node of left tree and left node of right tree, it checks all and return true if correct
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
    bool mirror(TreeNode* r1,TreeNode* r2) {
        if(!r1 && !r2) return true;
        else if((!r1 && r2) || (r1 && !r2) || (r1->val!=r2->val)) return false;
        return mirror(r1->right,r2->left) && mirror(r1->left,r2->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return mirror(root->left,root->right);
    }
};
