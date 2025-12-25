#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
class Node{
     public:
      int data;
      Node*left;
      Node*right;
      Node(int val){
        data=val;
        left=right=NULL;

      }

};
Node*buildtree(vector<int>preorder){
    static int index=0;
    if(index>=preorder.size() || preorder[index]==-1){
        index++;
        return NULL;
    }
    Node*newNode=new Node(preorder[index++]);
    newNode->left=buildtree(preorder);
    newNode->right=buildtree(preorder);
    return newNode;

}
void kthlevel(Node*root,int k){
    if(root==NULL) return;
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
   kthlevel(root->left,k-1); 
   kthlevel(root->right,k-1);
}
int main(){
    vector<int>preorder={1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node*root=buildtree(preorder);
    kthlevel(root,3);
    return 0;
}