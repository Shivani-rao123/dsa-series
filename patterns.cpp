// 
//to increase the character count of the string
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        char ch='A';//next line it must start with A thwats why it is inside one for loop
        for(int j=0;j<=n;j++){
            cout<<ch;
            ch=ch+1;

        }
        cout<<endl;
    }
}