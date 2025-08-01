#include<iostream>
#include<vector>
using namespace std;

int recBinary(vector<int>arr,int tar,int st,int end){
    if(st<=end){
    int mid = st+(end-st)/2;
    if(tar>arr[mid]){
        return recBinary(arr,tar,mid+1,end);

    }
    else if(tar<arr[mid]){
        return recBinary(arr,tar,st,mid-1);
    }
    else{
        return mid;
    }
    }
    return -1;
}
int main(){
    vector<int>arr ={1,2,3,4,5};
    int tar = 3;
    int st = 0;
    int end = arr.size()-1;
    int ans = recBinary(arr,tar,st,end);
    cout<<ans<<endl;
    return 0;
}