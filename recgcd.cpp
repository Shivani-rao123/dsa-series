#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    else if(a>b){
        return gcd(b,a%b);
    }
    else{
        return gcd(a,b%a);
    }
}
int main(){
    int a=12,b=18;
    cout<<gcd(a,b)<<endl;
    return 0;
}
