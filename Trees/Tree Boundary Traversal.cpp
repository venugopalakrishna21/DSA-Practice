// we have to add the tree in anticlockwise direction. 

// first we add left nodes if there is no left left node move right and alwas check weather it is leaf or not. if it is not leaf add its value to answer. 

// we add all leaf nodes here for both directions. we use recursion 
//     if(root->left) addleafs(root->left,ans);
//     if(root->right) addleafs(root->right,ans);

// now we add right trees . but 1st we store these values in vector and add from back to the answer(anti clock wise direction).

// in main function if the root is not a leaf we add it to answer and perform these function from left root ,root,right root.


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

bool isleaf(Node *root) {
    return !root->left && !root->right;
}
void addlefttrees(Node *root,vector<int> &ans) {
    while(root) {
    if(!isleaf(root)) {
        ans.push_back(root->data);
    }
    if(root->left) root=root->left;
    else root=root->right;
    }
}

void addleafs(Node *root,vector<int> &ans) {
    if(isleaf(root))  {
        ans.push_back(root->data);
        return;
    }
    if(root->left) addleafs(root->left,ans);
    if(root->right) addleafs(root->right,ans);
}
void addrighttrees(Node *root,vector<int> &ans) {
    vector<int>v;
    while(root) {
        if(!isleaf(root)) {
            v.push_back(root->data);
        }
        if(root->right) root=root->right;
        else root=root->left;
    }
    for(int i=v.size()-1;i>=0;i--) {
        ans.push_back(v[i]);
    }
}
class Solution {
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        if(!root) return ans;
        if(!isleaf(root)) ans.push_back(root->data);
        addlefttrees(root->left,ans);
        addleafs(root,ans);
        addrighttrees(root->right,ans);
        return ans;
    }
};
