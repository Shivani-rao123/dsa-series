#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>

using namespace std;
int main() {
    queue<int> q;
    q.push(1); // Adds 1 to the top of the stack
    q.push(2); // Adds 2 to the top of the stack    
    q.push(3); // Adds 3 to the top of the stack
   
   
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop(); // Removes the top element
    }
    cout<<endl;

    return 0;
}