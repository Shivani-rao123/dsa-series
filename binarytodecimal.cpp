#include<iostream>
using namespace std;
int decimalTobinary(int decNum){
    int ans=0;
    int pow=1;
    int rem;
    

    while(decNum>0){
       rem=decNum%2;
       decNum=decNum/2;
       ans+=(rem*pow);
       pow=pow*10;
    }
    return ans;//binary number
}
int main(){
    int decNum;
    cout<<"Enter the decimal number:";
    cin>>decNum;
    cout<<"The binary number is:" <<decimalTobinary(decNum)<<endl;
    return 0;
}
