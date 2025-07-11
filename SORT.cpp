// #include<iostream>
// #include<algorithm> // ✅ Required
// using namespace std;

// int main() {
//     int arr[5] = {3, 5, 1, 8, 2};
//     int arr2[5] = {9, 4, 8, 0, 1};

//     sort(arr, arr + 5); // Ascending
//     sort(arr2, arr2 + 5, greater<int>()); // Descending

//     for(int i = 0; i < 5; i++){
//         cout << arr2[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

#include<iostream>
#include<algorithm>
#include<vector> // ✅ Required
using namespace std;
bool comparator(pair<int,int> p1,pair<int,int>p2){
  if(p1.second<p2.second) return true;
  if(p1.second>p2.second) return false; 
  if(p1.first<p2.first) return true;// Sort by second element in ascending order
  else return false; // Otherwise, keep the order as is
}

int main() {
    vector<pair<int,int>> vec={{ 3,1 },{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end(),comparator);
    for(auto p:vec){
        
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout << endl;
    return 0;
}
