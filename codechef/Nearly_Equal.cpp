#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int solve( string &a,  string &b) {
    int dis = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            dis++;
        }
    }
    return dis;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int ans = m; 
        for (int i = 0; i <= n - m; ++i) {
            string res = a.substr(i, m);
            int x = solve(res, b);
            ans = min(ans, x);
        }

        cout << ans << endl;
    }

    return 0;
}
