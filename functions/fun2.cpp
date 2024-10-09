#include<iostream>
using namespace name
double sum(double a,double b){
    double s=a+b;
    return s;
}
int minOfTwo(int a,int b){//parameters
    if(a<b){
        return a;

    }else{
        return b;
    }
}
int main(){
    cout<< "min= "<<minOfTwo(10,5)<<endl;//arguments
    return 0;
}