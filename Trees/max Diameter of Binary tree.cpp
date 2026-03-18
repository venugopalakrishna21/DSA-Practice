// we need to find diameter of binary tree. means the max distance from one node to another node. 
// for this we use the height of binary tree and a global cout variable. we update that variable comparing with left+right. 

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  int dia=0;
    int  height(Node* root) {
        if(!root) return 0;
        int left=height(root->left);
        int right=height(root->right);
        dia=max(dia,left+right);
        return 1+max(left,right);
    }
    int diameter(Node* root) {
        // code here
        height(root);
        return dia;
    }
};
