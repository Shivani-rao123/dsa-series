#include<iostream>
using namespace std;
int main(){//first there is some space and then there is a number
//first number does not have space
    //in the second line there is one space
    //in the third line there are two spaces
    // there are i number of spaces
    
for(int i=0;i<4;i++){
    for(int j=0;j<i;j++){
        cout<<" ";

    }// we have printed spaces first
    for(int j=0;j<4-i;j++){
        cout<<i+1;
    }// number  will be printed 4-i times and i+1 number is printed
    
    cout<<endl;
}
}