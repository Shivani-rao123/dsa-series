#include<iostream>
#include<string>
#include<vector>
using namespace std;
void getPerms(string str,vector<string> &ans,int idx){
    if(idx==str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=idx;i<str.length();i++){
        swap(str[idx],str[i]);
        getPerms(str,ans,idx+1);
        swap(str[idx],str[i]);

    }

}
int main(){
    string str="abc";
    vector<string> ans;
    getPerms(str,ans,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;

}