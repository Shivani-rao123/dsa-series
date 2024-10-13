// #include<iostream>
// using namespace std;
// int num;

// int sum(int num){
//     int digitsum=0;
//     while(num>0){
//         int lastdigit=num%10;
//         num=num/10;
//         digitsum+=lastdigit;
//     }
//     return digitsum;

// }
// int main(){
    
    
//     cout<<"The sum of the digits of the number is:"<<sum(2356)<<endl;
//     return 0;
// }
//nCr=n!/r!(n-r)!

#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r){
   int fact_n=factorial(n);
   int fact_r=factorial(r);
   int factnmr=factorial(n-r);
   return fact_n/(fact_r*factnmr);
}
int main(){
    int n=8,r=2;
    cout<<nCr(n,r)<<endl;
   
}
