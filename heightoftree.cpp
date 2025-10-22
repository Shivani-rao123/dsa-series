#include<iostream>
#include<vector>
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

Node* buildtree(vector<int>& preorder) {
    static int index = 0;
    
    if (index >= preorder.size() || preorder[index] == -1) {
        index++;
        return NULL;
    }

    Node* newNode = new Node(preorder[index++]);
    newNode->left = buildtree(preorder);
    newNode->right = buildtree(preorder);

    return newNode;
}

int height(Node* root) {
    if (root == NULL) return 0;

    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht, rightht) + 1;
}
//count
int count(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftCount=count(root->left);
    int rightCount= count(root->right);
    return leftCount+rightCount+1;

}
int sumNodes(Node*root){
    if (root == NULL) return 0; // base case added
    int leftsum = sumNodes(root->left);
    int rightsum=sumNodes(root->right);
    return leftsum+rightsum+root->data;
}
void preorderTraversal(Node*root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void InorderTraversal(Node*root){
    if(root==NULL) return ;
    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);
}
void PostorderedTraversal(Node*root){
    if(root==NULL) return ;
    PostorderedTraversal(root->left);
    PostorderedTraversal(root->right);
    cout<<root->data<<" ";
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    Node* root = buildtree(preorder);
    cout << "Height: " << height(root) << endl;
    cout<<"node count: "<<count(root)<<endl;
    cout<<"sum of nodes: "<<sumNodes(root)<<endl;
    cout<<"preoder traversal";
    preorderTraversal(root);
    cout<<"Inordere traversal";
    InorderTraversal(root);
    cout<<"Postordered traversal";
    PostorderedTraversal(root);

    return 0;
}
