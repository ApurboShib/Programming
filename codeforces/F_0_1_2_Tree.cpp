#include <iostream>
#include <algorithm>
using namespace std;

int dfs(int a, int b, int c) {
    if (a < 0 || b < 0 || c < 0)
        return -1;
    if (a == 0 && b == 0)
        return c;
    
    int maxHeight = 0;
    if (a > 0) {
        maxHeight = max(maxHeight, dfs(a - 2, b + 1, c));
    }
    if (b > 0) {
        maxHeight = max(maxHeight, dfs(a, b - 1, c));
    }
    if (c > 0) {
        maxHeight = max(maxHeight, dfs(a, b, c - 1));
    }
    
    if (maxHeight == -1)
        return -1;
    else
        return maxHeight + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << dfs(a, b, c) << endl;
    }
    return 0;
}
