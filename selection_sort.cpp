#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i; // Assume the first element is the minimum
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }
        swap(arr[i],arr[minIndex]); // Swap the found minimum element with the first element
    }

} 

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n= 5;
    int arr[] = {4,1,5,2,3};
    selectionSort(arr,n);
    printArray(arr,n);

     return 0;
}