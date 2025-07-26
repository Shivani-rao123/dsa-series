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
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a; // If b is 0, return a; otherwise, return b
}
bool isArmstrong(int n){
    int copyN =n ;
    int sumOfCubes = 0;
    while(n!=0){
        int dig= n%10;
        sumOfCubes += dig * dig * dig; // Calculate the cube of the digit
        n = n / 10; // Remove the last digit
    }
    return sumOfCubes == copyN; // Check if the sum of cubes equals the original number

}
int gcdrec(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcdrec(a%b,b);
    else return gcdrec(a,b%a);
}
int main(){
    int n =153;
     if(isArmstrong(n)){
        cout<<"It is an Armstrong number"<<endl;
     }
        else{
            cout<<"It is not an Armstrong number"<<endl;
        }
        cout<<gcd(6,12)<<endl;
        cout<<gcdrec(28,20)<<endl;

    return 0;
}