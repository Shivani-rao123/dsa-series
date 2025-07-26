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
int main(){
    int n =153;
     if(isArmstrong(n)){
        cout<<"It is an Armstrong number"<<endl;
     }
        else{
            cout<<"It is not an Armstrong number"<<endl;
        }
    return 0;
}