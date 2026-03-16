// in level order traversal just add the elements based on the level. if level =0 add normally else reverse vector and add


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
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>> ans;
            if(root==NULL) return ans;
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()) {
                int n=q.size();
                int i=0;
                vector<int>v;
                while(i<n) {
                    TreeNode* front=q.front();
                    v.push_back(front->val);
                    q.pop();
                    if(front->left) {
                        q.push(front->left);
                    }
                    if(front->right) q.push(front->right);
                    i++;
                }
                if(ans.size()%2==0) ans.push_back(v);
                else {
                    reverse(v.begin(),v.end());
                    ans.push_back(v);
                }
            }
            return ans;
        }
    };
