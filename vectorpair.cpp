#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;
int main() {
    vector<pair<int,int>> vec={{ 1,2 },{2,3},{3,4}};
    vec.push_back({ 4,5 });//insert
    vec.emplace_back(4,5);//in-place objects create
    for(auto p: vec){
        cout<< p.first <<" "<<p.second<<endl;
    }
    return 0;
}