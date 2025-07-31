#include<iostream>
using namespace std;

void printNums(int n) {
    if(n==1){
        cout<<"1\n";
        return;
    }
     cout<< n<<" ";//n-1,n-2 ...1
     printNums(n-1);

}
int main() {
    printNums(4);

    return 0;
}