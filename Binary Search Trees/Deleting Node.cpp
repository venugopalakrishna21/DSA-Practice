// check weather root has value. create a helper function to delete the node and return the next node. 
// helper fn {
//     this takes root (or a node with key) and checks for any null on right or left. if any one is null 
//     then return other. 
//     ->if both are not null we can attach them to any side. like we can attach the left side of root      
//        to the full left side of root right. the return root right. 
// }
// in this we find till we get the root==key. 
// create a parent node to track the parent of the node with key value. 
// check weather the key is left or right of parent node then perform helper function and attach to parent node.
// thats it....

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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        if(root->val==key) {
            return helper(root);
        }
        TreeNode* temp=root,*parent=root;
        while(temp) {
            if(temp->val==key) break;
            parent=temp;
            if(temp->val<key) temp=temp->right;
            else temp=temp->left;
        }
        if(!temp) return root;
        if(parent->left==temp)  
        parent->left=helper(temp);
        else parent->right=helper(temp);
        return root;
    }


    TreeNode* helper(TreeNode* root) {
        if(!root->left) return root->right;
        else if(!root->right) return root->left;
        TreeNode* leftchild=root->left,* rightchild=root->right;
        TreeNode* dummy=rightchild;
        while(dummy->left) {
            dummy=dummy->left;
        }
        dummy->left=leftchild;
        return rightchild;
    }
};
