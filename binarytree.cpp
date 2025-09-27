#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;

 
    }
};
static int idx =-1;
Node* buildTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);//LEFT
    root->right = buildTree(preorder);//RIGHT
    return root;

}
void preorder(Node* root){
    if(root ==NULL){
        return;
    }
    cout<<root>data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}
void postorder(root){
    if(root==NULL){
        return;

    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}
void levelorder(Node* root){
    queue<Node>q;
    q.push(root);
    while(q.size()>0){
        Node* curr =q.front();
        q.pop();
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
int main(){
    vector<int> preorder ={1,2,-1,-1,3,4,-1,5,-1,-1};
    Node* root =buildTree(preorder);
    preorder(root);
    inorder(root);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    return 0;
}
