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
// class Solution {
// public:
//     void answer(TreeNode* root,vector<int>&finalans) {
//         if(root==NULL) return;
//         finalans.push_back(root->val);
//         answer(root->left,finalans);
//         answer(root->right,finalans);
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int>finalans;
//         answer(root,finalans);
//         return finalans; 
//     }
// };

//	
// Iterative Preorder Traversal of Binary Tree
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
       stack<TreeNode*>st;
       if(root==NULL) return {};
       st.push(root);
       vector<int> ans;
       while(!st.empty()) {
        ans.push_back(st.top()->val);
        TreeNode* current=st.top();
        st.pop();
        if(current->right) st.push(current->right);
        if(current->left) st.push(current->left);
       }
       return ans;
    }
};
