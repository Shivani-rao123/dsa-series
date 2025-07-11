#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;
int main() {
   multimap<string ,int>m;
   m.emplace("tv",100);
   m.emplace("tv",100);
   m.emplace("tv",100);
   m.emplace("tv",100);
   m.emplace("tv",100);
   m.erase("tv");   
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl; // Output: tv 100, laptop 100, headphone 100
        
    }

    

    return 0;
}// sorted on the basis of the key value in the ascending order sort the key in the form of ascending order 
