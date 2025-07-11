#include<iostream>
#include<algorithm> // ✅ Required
using namespace std;

int main() {
    int arr[5] = {3, 5, 1, 8, 2};
    int arr2[5] = {9, 4, 8, 0, 1};

    sort(arr, arr + 5); // Ascending
    sort(arr2, arr2 + 5, greater<int>()); // Descending

    for(int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
