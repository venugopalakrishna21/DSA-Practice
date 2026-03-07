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
    void answer(TreeNode* root,vector<int>&finalans) {
        if(root==NULL) return;
        finalans.push_back(root->val);
        answer(root->left,finalans);
        answer(root->right,finalans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>finalans;
        answer(root,finalans);
        return finalans; 
    }
};
