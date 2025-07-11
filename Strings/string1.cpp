#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "Hello, World!";
    cout<<str<<endl;
    str = "hello";
    cout<<str<<endl;// e can print this twice a strings are dynamic in nature 

//u can add the strings 
   
    string str4;
    getline(cin,str4);
    cout<<str4<<endl; // This will print the string entered by the user
    // cout<<chArr<<endl;// we cant print this twice 
    return 0;

}