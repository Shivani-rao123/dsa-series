#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int len, k, x;
    cin >> len >> k >> x;
    
    vector<int> arr(len);
    for(int i = 0; i < len; i++)
        cin >> arr[i];
    
    // Sort array based on distance from x in descending order
    sort(arr.begin(), arr.end(), [x](int a, int b) {
        return abs(a - x) > abs(b - x);
    });
    
    int sum = 0;
    // One loop to sum first k elements (farthest)
    for(int i = 0; i < k; i++)
        sum += arr[i];
    
    cout << sum << endl;
    return 0;
}
