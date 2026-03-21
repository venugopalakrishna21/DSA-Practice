// perform inorder traversal and insert the ele in vector. if we do inorder traversal the tree is stored in ascending order. so when the vector size becomes >=given count stop iteration and return that kth element. 





// for largest kth element , just modify inorder traversal. perform root->right first and then insert node then root->left. 

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
//  class Solution {
// public:
// set<int>st;                                   //brute force
// void height(TreeNode* root) {
//     if(root==NULL) return;
//     height(root->left);
//     height(root->right);
//     st.insert(root->val);
// }
//     int kthSmallest(TreeNode* root, int k) {
//         height(root);
//         int cnt=1;
//         for(auto it:st) {
//             if(cnt==k) {
//                 return it;
//             }
//             cnt++;
//         }
//         return -1;
//     }
// };

// optimal


class Solution {
public:
    void inorder(TreeNode* root, vector<int> &ans,int k) {
        if(root==NULL) return;
        inorder(root->left,ans,k);
        if(ans.size()>=k) return;
        ans.push_back(root->val);
        inorder(root->right,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root,ans,k);
        return ans[k-1];
    }
};
