// every left node is a min value in BST. so forwarding to left node means its a min value.

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int minValue(Node* root) {
        // code here
        int ans=INT_MAX;
        while(root) {
            ans=root->data;
            root=root->left;
        }
        return ans;
    }
};
