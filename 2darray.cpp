#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    int matrix[4][3];
    int row =4;
    int col=3;
    //input

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    //output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}