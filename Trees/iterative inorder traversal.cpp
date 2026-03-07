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


// iterative inorder traversal
class Solution {
public:

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
        stack<TreeNode*> st;
        TreeNode* Node=root;
        while(Node || !st.empty()) {
            while(Node) {
                st.push(Node);
                Node=Node->left;
            }
            Node=st.top();
            st.pop();
            ans.push_back(Node->val);
            Node=Node->right;
        }
        return ans;
    }
};
