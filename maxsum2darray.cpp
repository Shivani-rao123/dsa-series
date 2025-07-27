#include<iostream>
#include<climits>
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
int getMaxSum(int mat[][3],int rows, int cols){
    int maxSum = INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSumI=0;
        for(int j=0;j<cols;j++){
            rowSumI += mat[i][j];
        }
        maxSum = max(maxSum , rowSumI);

    }
    return maxSum;
}


int main() {
    
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int target=9;
    int rows = 3;
    int cols = 3;
    pair<int,int> p = linearSearch(matrix, rows, cols, target);

    if(p.first !=-1){
        cout << "Element found in the matrix." <<p.first<<","<<p.second<< endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }
    cout << "Maximum Row Sum: " << getMaxSum(matrix, rows, cols) << endl;
    return 0;
}