#include <iostream>
#include <vector>
using namespace std;

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

// build tree from preorder with -1 as null
Node* buildTree(vector<int>& preorder, int& idx) {
    if (idx >= preorder.size() || preorder[idx] == -1) {
        idx++;
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    idx++;

    root->left = buildTree(preorder, idx);
    root->right = buildTree(preorder, idx);

    return root;
}

// simple preorder traversal print
void preorderPrint(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

int main() {
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int idx = 0;

    Node* root = buildTree(preorder, idx);

    // just print the tree in preorder (same as input without -1)
    preorderPrint(root);
    cout << endl;

    return 0;
}
