#include<iostream>
using namespace std;
pair<int,int> linearSearch(int matrix[][3], int rows, int cols,int target){
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]== target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
   
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
    pair<int,int> p = linearSearch(matrix, rows, cols, target);

    if(p.first !=-1){
        cout << "Element found in the matrix." <<p.first<<","<<p.second<< endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }
    return 0;
}