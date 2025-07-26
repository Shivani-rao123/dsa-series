#include <iostream>
using namespace std;
string isPrime(int n){
    fot(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "Non Prime";
        }
    }
    return "Prime";

}
int main(){
    int n =42;
    cout<<isPrime
    return 0;
}