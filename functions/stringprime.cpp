#include <iostream>
using namespace std;
string isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "Non Prime";
        }
    }
    return "Prime";

}
void printDigits(int n){
    while(n !=0){
        int digit = n%10;
        cout<< digit <<endl;
        n=n/10;
    }
}
int main(){
    int n =3568;
    cout<<isPrime(n)<<endl;
    printDigits(n);
    return 0;
}