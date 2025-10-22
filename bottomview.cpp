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
void bottomView(Node* root){
    queue<pair<Node*,int>>q;//(node,hd);
    map<int,int>m ;//(horizontal distance and node)

    q.push({root,0});
    while(q.size()>0){
        Node*curr=q.front().first;
        int currHD=q.front().second;

        q.pop();
       
            m[currHD]=curr->data;
        
       

        if(curr->left!=NULL){
            q.push({curr->left,currHD-1});
        }
        if(curr->right!=NULL){
            q.push({curr->right,currHD+1});
        }
    }
    for(auto it :m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node*root=buildtree(preorder);
    bottomView(root);
    return 0;
}