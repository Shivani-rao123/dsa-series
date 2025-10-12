#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={4,1,5,2,3};
    int n=arr.size();
    for(int i=0;i<n;i++){
        int SI=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[SI])
                 SI=j;
        }
        swap(arr[i],arr[SI]);

    }
    for(int val:arr){
        cout<<val;
    }
    return 0;
}