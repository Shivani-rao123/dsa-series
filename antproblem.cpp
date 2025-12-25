#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int minsteps(int a, int b, int x) {
    if (x == 0) return 0;

    int maxPos = a + b + x;
    vector<bool> vis(maxPos + 1, false); // ✅ fixed size
    queue<pair<int, int>> q;

    q.push({0, 0});
    vis[0] = true;

    while (!q.empty()) {
        pair<int,int>curr=q.front();
        int pos=curr.first;
        int steps=curr.second;
        q.pop();

        int fwd = pos + a;
        if (fwd == x) return steps + 1;
        if (fwd <= maxPos && !vis[fwd]) {
            vis[fwd] = true;
            q.push({fwd, steps + 1});
        }

        int back = pos - b;
        if (back >= 0 && !vis[back]) {
            if (back == x) return steps + 1;
            vis[back] = true;
            q.push({back, steps + 1});
        }
    }
    return -1; // not reachable
}

int main() {
    int a = 4, b = 3, x = 10;
    cout << "Minimum steps = " << minsteps(a, b, x) << endl;
    return 0;
}
