#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);
    for(int val:l){
        cout<<val<<" "; // Output: 5 3 1 2
    }
    cout<<l[1]<<endl; // Output: 3// we cannot access elements by index in list, so this will not work
    return 0; 
}