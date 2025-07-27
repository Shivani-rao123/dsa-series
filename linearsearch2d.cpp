#include<iostream>
using namespace std;
bool linearSearch(int matrix[][3], int rows, int cols,int target){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]== target){
                return true;
            }
        }
    }
    return false;
}


int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    int target=9;
    int rows = 4;
    int cols = 3;
    if(linearSearch(matrix, rows, cols, target)){
        cout << "Element found in the matrix." << endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }
    return 0;
}