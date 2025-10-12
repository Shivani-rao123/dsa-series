#include<iostream>
#include<vector>
#include <cmath>
#include<algorithm>
using namespace std;
bool isvaliddivisor(vector<int>arr,int divisor,int threshold){
    int sum=0;
    for(int num:arr){
      sum+=ceil((double)num/divisor);

    }
    return sum<=threshold;
}
int value(vector<int>arr,int threshold){
    int low=1;
    int high=*max_element(arr.begin(),arr.end());
    int result=high;
    while(low<high){
        int mid=(low+high)/2;
        if(isvaliddivisor(arr,mid,threshold)){
            result=mid;
            high=mid-1;

        }
        else{
            low=mid+1;
        }
    }
    return result;
}
int main(){
    vector<int>arr;
    arr={1, 2, 5, 9};
    int k=6;
    cout<<value(arr,k);
    cout<<endl;

}