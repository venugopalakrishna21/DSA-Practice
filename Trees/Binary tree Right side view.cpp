

// we have to return the array that contains the elemets of tree when we see from right. 

// so for this we follow level order traversal BFS . 
// in this we take last element for every level .

// for left side view take 1st element thats it


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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>ans;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()) {
            int n=q.size();
            for(int i=0;i<n;i++) {
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                if(i==n-1) ans.push_back(curr->val);
            }
        }
        return ans;
    }
};
