//comments in kth smallest


/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'

class Solution {
  public:
  void height(Node* root,vector<int>&ans,int k) {
      if(!root) return;
      height(root->right,ans,k);
      ans.push_back(root->data);
      if(ans.size()>=k) return;
      height(root->left,ans,k);
  }
    int kthLargest(Node *root, int k) {
        // Your code here
        vector<int>ans;
        height(root,ans,k);
        return ans[k-1];
    }
};
