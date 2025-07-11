#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vector<int> vec2(5, 10); // Initializes a vector of size 5 with all elements set to 10
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);
    vec.pop_back() ;// Adds 4 to the end of the vector
    cout<<vec.size()<<endl; 
    cout<<vec.capacity()<<endl;// Output: 0
    for(int val: vec){
        cout<<val<<" "<<endl; // Output: 1 2 3 
    }
    for(int val2:vec2){
        cout<<val2<<" "; // Output: 10 10 10 10 10
    }
    cout<< "val at idx 2 "<<vec.at(2)<<endl; // Output: 3
    cout<< "front" << vec.front() << endl; // Output: 1
    cout<< "back" << vec.back() << endl; // Output: 3
    vec.erase(vec.begin() + 1); // Removes the element at index 1
    
   
    return 0;
}