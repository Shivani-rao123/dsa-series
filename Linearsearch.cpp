#include<iostream>
using namespace std;
int main(){
    int i;
    int target;
    int arr[]={4,2,7,8,1,2,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Enter the target value"<<endl;
    cin>>target;
    int index=-1;
    for(i=0;i<size;i++){
        if(arr[i]==target){
            index= i;
            break;
        }
       
    }
    if(index==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element "<<target<< " found at index "<<i<<endl;
    }

}