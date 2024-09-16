#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

void solve(vector<int>& v, int x) {
    sort(v.begin(), v.end());
    int l = 0;
    int r = v.size() - 1;
    while (l <= r) {
        int sum = v[l] + v[r];
        if (sum == x) {
            cout << l << " " << r << endl;
            l++;
            r--;
        } else if (sum > x) {
            r--;
        } else {
            l++;
        }
    }
    return;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x;
    cin >> x;

    solve(v, x);

    return 0;
}
