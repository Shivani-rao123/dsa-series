#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;
int main() {
   set<int>s;
   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(4);
   s.insert(5);  
   s.insert(6);//very nex value is printed in the lowerbound 
   //if 4 doesnt exists
   cout<<"lower bound= "<<*(s.lower_bound(4))<<endl;//s.end//4
   cout<<"upper bound = "<<*(s.upper_bound(4))<<endl;//s.begin//5
    for(auto p:s){
        cout<<p<<" "; // Output: tv 100, laptop 100, headphone 100
        
    }
    cout<<endl;

    

    return 0;
}// sorted on the basis of the key value in the ascending order sort the key in the form of ascending order 
