#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

bool isValid(vector<int> arr, int N, int C, int minAllowedValue) {
    int cows = 1, lastStallPosition = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] - lastStallPosition >= minAllowedValue) {
            cows++;
            lastStallPosition = arr[i];
        }
        if (cows == C) return true;
    }
    return false;
}

int getDistance(vector<int> arr, int n, int m) {
    sort(arr.begin(), arr.end());

    if (m > n) return -1;
    if (m == 1) return arr[n - 1] - arr[0];
    if (m == n) return 0;

    int minStall = arr[0];
    int maxStall = arr[n - 1];

    // Binary search for the maximum minimum distance
    int st = 1, end = maxStall - minStall, ans = -1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid)) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 8, 4, 9};
    cout << getDistance(arr, 5, 3) << endl;
    return 0;
}
