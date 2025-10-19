#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    vector<int> arr(n);      
    vector<int> newone;

    cout << "Enter the target: ";
    cin >> k;

    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != k) {
            newone.push_back(arr[i]);
        }
    }

    cout << "Array after removing " << k << ": ";
    for (int val : newone) {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}
