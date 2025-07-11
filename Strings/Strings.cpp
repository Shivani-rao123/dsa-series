#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char c[100];
    cout<<"Enter a string: ";
    cin.getline(c,100,'$');
    cout<<c<<endl;
    char str[] = {'a','b','c','\0'};
    char str1[]="College";
    cout<<str<<endl;
    int arr[] = {1, 2, 3, 4, 5};
    cout<<strlen(str)<<endl;
    cout<<arr<<endl; // This will print the address of the first element, not the contents of the array
    return 0;
}