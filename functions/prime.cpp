#include<iostream>
using namespace std;
int prime(int n){
    for(int i=2;i*i<=n;i++){
        if (n%i==0){
            return false;
        }
        
        }
        
            return true;
    
    return 0;
}
int main(){
    int n=7;
    
    if (prime(n)==1){
        cout<<"It is a prime number"<<endl;
    }
    else{
       cout<<"It is not a prim number"<<endl;
    }
    return 0;
}