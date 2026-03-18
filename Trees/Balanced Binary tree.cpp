// in this we have to find weather the nodes of tree compared to the other have absolute diff>1 then return false. 
// to do this we use maxheight solution and find weather left-right>1. if yes then return false and return -1 in that function to not go for further recursion
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  bool ans=true;
  int height(Node* root) {
      if(!root) return 0;
      int left=height(root->left);
      if(left==-1) return -1;
      int right=height(root->right);
      if(right==-1) return -1;
      if(abs(left-right) >1) {
          ans=false;
          return -1;
      }
      return max(left,right)+1; 
  }
    bool isBalanced(Node* root) {
        // code here
        height(root);
        return ans;
    }
};
