// floor is int a =5.5 then floor a is 5. In BST floor 5 means find the node where the value is less than or equal to 5 and max of those <=5
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int findFloor(Node* root, int x) {
        // code here
        int ans=-1;
        while(root) {
            if(root->data<=x) {
                ans=root->data;
                root=root->right;
            }
            else {
                root=root->left;
            }
        }
        return ans;
    }
};
