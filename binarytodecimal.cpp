// 

//Binary to decimal

#include <iostream>
using namespace std;
int binarytoDecimal(int DecNum){
    int ans=0;
    int pow=1;
    int rem;
   

    while(DecNum){
        int rem=DecNum%10;
        ans+=rem*pow;
        pow=pow*2;
        DecNum=DecNum/10;

    }
    return ans;

}
int main(){
    cout<<"The decimal value is"<<binarytoDecimal(1010)<<endl;
}