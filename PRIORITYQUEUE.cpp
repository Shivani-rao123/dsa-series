// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>

// using namespace std;
// int main() {
//     priority_queue<int> q;
//     q.push(5); // Adds 1 to the top of the stack
//     q.push(3); // Adds 2 to the top of the stack    
//     q.push(10);
//     q.push(4); // Adds 3 to the top of the stack
   
   
//     while(!q.empty()){
//         cout<<q.top()<<" ";
//         q.pop(); // Removes the top element
//     }
//     cout<<endl;

//     return 0;
// }
//reverse order of priority queue
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>

using namespace std;
int main() {
    priority_queue<int,vector<int>,greater<int>> q;
    q.push(5); // Adds 1 to the top of the stack
    q.push(3); // Adds 2 to the top of the stack    
    q.push(10);
    q.push(4); // Adds 3 to the top of the stack
   
   
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop(); // Removes the top element
    }
    cout<<endl;

    return 0;
}