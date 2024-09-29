// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=11;
//     bool isPrime=true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime==true){
//         cout<<"Prime Number"<<endl;
//     }
//     else{
//         cout<<"Not a Prime Number"<<endl;
//     }
//     return 0;
// }
//factors are unique from 1 to root n
//Nested loops
#include<iostream>
using namespace std;
int main(){
    int n=10;
  for(int i=1;i<=n;i++){//how many lines should be ther
    int m=5;
    for(int i=1;i<=m;i++){// how many stars should be there
        cout<<"*";
    }
    cout<<endl;//hello
  }
    cout<<endl;
    return 0;
}
