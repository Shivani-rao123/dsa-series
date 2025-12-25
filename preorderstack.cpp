#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node{
    public:
    Node*left;
    Node*right;
    int data;
    Node(int val){
        data=val;
        left=right=NULL;

    }



};
Node* buildtreee(vector<int>&preorder){
    static int index=0;
    if(index>=preorder.size()||preorder[index]==-1){
        index++;
        return NULL;

    }
    Node* newNode=new Node(preorder[index++]);
    newNode->left=buildtreee(preorder);
    newNode->right =buildtreee(preorder);
    return newNode;

}
vector<int>preorderTraversal(Node*root){
    vector<int>res;
    if(!root) return res;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node*node=st.top();
        st.pop();
        res.push_back(node->data);
        if(node->right){
            st.push(node->right);
        }
        if(node->left){
            st.push(node->left);
        }
        
    }
    return res;

}

int main(){
    vector<int> preorder={1,2,3,4,5,-1,8,-1,-1,6,7,9};
    Node*root=buildtreee(preorder);
    vector<int>result=preorderTraversal(root);
    for(int val:result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}