#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;
int main() {
    stack<int> s;
    s.push(1); // Adds 1 to the top of the stack
    s.push(2); // Adds 2 to the top of the stack    
    s.push(3); // Adds 3 to the top of the stack
    cout << "Top element: " << s.top() << endl; // Output: 3
    stack<int>s2;
    s2.swap(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop(); // Removes the top element
    }
    cout<<endl;
    cout<<"s size:"<<s.size()<<endl; // Output: 0
    cout<<"s2 size:"<<s2.size()<<endl; // Output: 3
    return 0;
}