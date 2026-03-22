// to chech weather a tree is binary tree or not we use range for every recursion. maximum and minimum range. 

// for the large numbers we give LLONG_MAX,LLONG_MIN and in recursion we take long long x,long long y. 

// if !root it is true and if the node value is <=minrange or >= maxrange, then it is not a proper BST

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
    bool check(TreeNode* root,long long mini,long long maxi) {
        if(!root) return true;
        if(root->val<=mini || root->val>=maxi) return false;
        return check(root->left,mini,root->val) && check(root->right,root->val,maxi);
    }
    bool isValidBST(TreeNode* root) {
        return check(root,LLONG_MIN,LLONG_MAX);
    }
};
