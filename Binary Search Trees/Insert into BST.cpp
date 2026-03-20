//  If key > node → go RIGHT; else → go LEFT.
//  When you find NULL position → insert new Node(key) there.

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        TreeNode* temp = root;
        while(temp) {
            if(val > temp->val) {
                if(!temp->right) {
                    temp->right = new TreeNode(val);
                    return root;
                }
                temp = temp->right;
            }
            else {
                if(!temp->left) {
                    temp->left = new TreeNode(val);
                    return root;
                }
                temp = temp->left;
            }
        }
        return root;
    }
};
