#include <iostream>
using namespace std;

void sumandproduct(int arr[], int size, int &sum, int &product) {  
    sum = 0;      // Initialize sum to 0
    product = 1;  // Initialize product to 1
    for (int i = 0; i < size; i++) {
        sum += arr[i];  
        product *= arr[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0, product = 1; // Ensure sum and product are properly declared and initialized

    // Call function with references to sum and product
    sumandproduct(arr, size, sum, product);

    cout << "Sum is " << sum << endl;
    cout << "Product is " << product << endl;
    return 0;
}
