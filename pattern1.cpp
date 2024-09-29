#include<iostream>
using namespace std;
int main(){
   
    int m,i,j;
    int n;
    
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    char ch='A';
    
    for(i=0;i<n;i++){
        
        for(j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
}

    return 0;
}