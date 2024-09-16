#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    double mx = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x1 = a[i];
            int y1 = b[i];
            int x2 = a[j];
            int y2 = b[j];
            double dis = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
            mx = max(mx, dis);
        }
    }

    cout << fixed << setprecision(10) << mx << endl;

    return 0;
}
