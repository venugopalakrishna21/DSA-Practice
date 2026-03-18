/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        queue<Node*>q;
        vector<int> ans;
        if(!root) return ans;
        q.push(root);
        int cnt=0;
        while(!q.empty()) {
            vector<int> dup;
            int n=q.size();
            for(int i=0;i<n;i++) {
                Node* curr=q.front();
                q.pop();
                if(curr->left) q.push(curr->left);         ///we can solve this better with a bool function .
                if(curr->right) q.push(curr->right);
                dup.push_back(curr->data);
            }
            if(cnt%2==0) {
                for(int i=0;i<dup.size();i++) {
                    ans.push_back(dup[i]);
                }
            }
            else {
                for(int i=dup.size()-1;i>=0;i--) {
                    ans.push_back(dup[i]);
                }
            }
            cnt++;
        }
        return ans;
    }
};
