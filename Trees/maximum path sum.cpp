// in this we have to find the maximum path sum of the tree. means from any node to any node we have to find max sum of the nodes. 
// for this we also have negatives. to overcome negatives we use 0 if the value is less than 0 for both left and right so that that path will not considered. we always
//   check the maximum sum for every iteration. 
//   we have to return sum of current node value and maximum of left and right so we get the max sum of including current node to the recursion called.


/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = data;
        left = right = NULL;
    }
};



class Solution {
  public:
  int maxsum=INT_MIN;
    int height(Node* root) {
        if(root==NULL) return 0;
        int left=max(0,height(root->left));
        int right=max(0,height(root->right));
        maxsum=max(maxsum,left+right+root->data);
        return root->data+max(left,right);
    }
    int findMaxSum(Node *root) {
        // code here
        height(root);
        return maxsum;
    }
};
