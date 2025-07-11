// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector <int> vec = {1, 2, 3, 4, 5};
//     vector<int>::iterator it;
//     for(it=vec.begin();it!=vec.end();it++){
//         cout<<*(it)<<" "; // Output: 1 2 3 4 5
//     }
//     cout<<endl;
//     return 0;
// }// fprward loop


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec = {1, 2, 3, 4, 5};
    
    for(auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<" "; // Output: 1 2 3 4 5
    }
    cout<<endl;
    return 0;
}// backward loop


    
