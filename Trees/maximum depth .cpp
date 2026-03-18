// just find the height of left root and right root and return maximum of the both sides +1 so the node we are in also counted.




/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
  int height(Node* root) {
      if(!root) return 0;
      int left=height(root->left);
      int right=height(root->right);
      return 1+max(left,right);
  }
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        // Your code here
        return height(root);
    }
};
