#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

void solve(vector<int>& v) {
    int sum1 = 0;
    int sum2 = 0;
    int ans = 0; 
    int l = 0;
    int r = v.size() - 1;

    while (l <= r) {
        if (sum1 < sum2) {
            sum1 += v[l];
            l++;
        } else {
            sum2 += v[r];
            r--;
        }

        if (sum1 == sum2) {
            ans = sum1;
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    solve(v);

    return 0;
}
