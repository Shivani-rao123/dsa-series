//this is the first aproach

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> twoSum(vector<int>vec, int target) {
//     vector<int>ans;
//     int n=vec.size();
//     for(int i =0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//            if(vec[i]+vec[j]==target){
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;

//            }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int>vec={2,7,11,15};
//     int target=9;
//     vector<int>ans =twoSum(vec,target);
//     cout<<ans[0]<<" "<<ans[1]<<endl;
//     return 0;

// }

//second approach

#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>vec, int target) {
    vector<int>ans;
    int n=vec.size();
    int i=0,j=n-1;
    while(i<j){
        int pairsum=vec[i]+vec[j];
        if(pairsum>target)
            j--;
        else if(pairsum<target)
            i++;
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
  
}

int main(){
    vector<int>vec={2,7,11,15};
    int target=9;
    vector<int>ans =twoSum(ve c,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;

}