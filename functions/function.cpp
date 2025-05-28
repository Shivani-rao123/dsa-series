// #include<iostream>
// using namespace std;

//    void printHello(){
//         cout<<"hello";

//         return 3;
//     }
//     int main(){
//         cout<<printHello()<<endl;
//        //function call and function invoke
//         return 0;
//     }
//sum of two numbers
// #include<iostream>
// using namespace std;
// int sum( int a,int b){
//     int s=a +b;
//     return s;
// }
// int main(){
//     cout<<sum(10,5)<<endl;
//     return 0;
//}//stack and heap memory heap for dynamic allocation and the stack for static allocation
//return must be always at the end
//pass by value:
#include<iostream>
using namespace std;
int sun(int x,int y){
    int sum=y+x;
    return sun();
}
int main(){
    int a=10,b=20;
    cout<<sun(a,b)<<endl;
    return 0;
}

