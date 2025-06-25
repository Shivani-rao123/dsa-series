#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a=10;
    int * ptr=&a;//ptr will store the adress of a 
    
    int**parPtr =&ptr;// parPtr will store the address of ptr which is address of a

    cout<<*(parPtr)<<endl;
    
   cout<<&ptr<<endl;
   cout<<parPtr<<endl;
   cout<<*(&a)<<endl;
   cout<<*(ptr)<<endl;

    return 0;
}