#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
using namespace std;
int main() {
   map<string ,int>m;
   m["tv"] =100;
   m["laptop"] =100;
    m["headphone"] =100;
    m["tablet"] =120;
    m.insert({"camera",25});
    m.erase("tablet"); // Removes the key-value pair with key "tablet"
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl; // Output: tv 100, laptop 100, headphone 100
        
    }
    cout<<"count ="<<m["laptop"]<<endl;
    if(m.find("camera")!=m.end()){
        cout<<"found\n";

    }else{
        cout<<"not found\n";
    }

    return 0;
}// sorted on the basis of the key value in the ascending order sort the key in the form of ascending order 
