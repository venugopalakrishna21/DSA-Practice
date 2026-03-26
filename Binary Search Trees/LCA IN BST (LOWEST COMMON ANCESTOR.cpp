// in this problem we have tree and 2 nodes. so what LCA in BST is when we start from root node for searching for those two nodes, if the paths are different. like consider a 
// BST and p=1 and q=3.  so when we start from root node there both paths are same. when we move to 4 both paths becomes different. so thats the node we need to return.
// even the root have the node with p or q return that node. 
//       6
//      /  \
//     4     8
//   /   \
//  2     3
// /
// 1  

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val<root->val && q->val<root->val) return lowestCommonAncestor(root->left,p,q);
        if(p->val>root->val && q->val>root->val) return lowestCommonAncestor(root->right,p,q);
        return root;
    }
};
