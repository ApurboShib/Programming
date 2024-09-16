#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;


void solve(vector<int>& v, int x) {
    int l = 0;
    int r = v.size() - 1;
    sort(v.begin(), v.end());
    int idx1, idx2;
    int diff = INT_MAX; 
    while (l <= r) {
        int sum = v[l] + v[r];
        if (abs(sum - x) < diff) {
            idx1 = l;
            idx2 = r;
            diff = abs(sum - x);
        }
        if (sum < x) {
            l++;
        } else {
            r--;
        }
    }
    
    cout << idx1 << ' ' << idx2 << endl;
    cout << v[idx1] << " " << v[idx2] << endl;
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
