#include<iostream>
#include<vector>
using namespace std;
struct dealer{
    int car;
    int bike;

};
int main(){
    int n;
    cin>>n;
    dealer d[n];
    for(int i=0;i<n;i++){
        cin>>d[i].car>>d[i].bike;

    }
    for(int i=0;i<n;i++){
        int tyres=d[i].car*4+d[i].bike*2;
    }
}