// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec;
//      cout<<"size="<<vec.size()<<endl;
//      vec.push_back(25);
//      vec.push_back(35);
//      vec.push_back(45);
//      cout<<"after push back"<<vec.size()<<endl;
//      vec.pop_back();//45 is deleted
//     for (int  val : vec)
//     {
//         cout << val << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec;
//      cout<<"size="<<vec.size()<<endl;
//      vec.push_back(25);
//      vec.push_back(35);
//      vec.push_back(45);
//      cout<<"after push back"<<vec.size()<<endl;
//      vec.pop_back();//45 is deleted
//     cout<< vec.front()<<endl;
//     cout<<vec.back()<<endl;
//     cout<<vec.at[2]<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
}