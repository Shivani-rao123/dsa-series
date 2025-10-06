#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

string removeconsecutive(string s,int k){
    stack<pair<char,int>>st;
    for(char c:s){
        if(!st.empty() && st.top().first==c){
            st.top().second++;
        }
        else{
            st.push({c,1});

        }
        if(st.top().second==k){
            st.pop();
        }
    }
    string result ="";
    while(!st.empty()){
        result.insert(0,string(st.top().second,st.top().first));
        st.pop();
    }
    return result;
}
int main(){
    int k;
    string str;
    k=2;
    str="geeksforgeeks";
    cout<<removeconsecutive(str,k)<<endl;

    k=3;
    str="qddxxxd";
    cout<<removeconsecutive(str,k)<<endl;

}