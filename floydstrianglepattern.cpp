#include<iostream>
using namespace std;
int main(){
    int n=4;

    int num=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<num<<" ";//using backward we can create a floyds triangle
            
            num++;

        }
        cout<<endl;
    }
}