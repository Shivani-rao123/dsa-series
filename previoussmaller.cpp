#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>smaller(vector<int>arr){
    
    stack<int>s;
    int n=arr.size();
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        while(s.size()>0 && s.top()>arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int>arr={3,1,0,8,6};
    vector<int>ans=smaller(arr);
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}