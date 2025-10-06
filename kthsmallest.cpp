#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int kthSmallest(vector<int>arr,int k){
    sort(arr.begin(),arr.end());
    return arr[k-1];

}
int main(){
    vector<int>arr;
     arr={1,7,8,2,3};
    int k=2;
    cout<<"The kth smallest element "<<kthSmallest(arr,k)<<endl;
    return 0;
    

}