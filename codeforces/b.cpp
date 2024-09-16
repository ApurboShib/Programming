#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    int mn = INT_MAX;
    map<int,int> mp;
    for(int i = 0; i < n * n; i++) {
        int a;
        cin >> a;
        mn = min(mn, a);
        mp[a]++;
    }
    int f = mn;
    for(int i = 0; i < n; i++) {
        f = mn + i * c;
        if(!mp[f]) {
            cout << "NO" << endl;
            return;
        }
        
        for(int j = 0; j < n; j++) {
            int move = f + j * d;
            if(!mp[move]) {
                cout << "NO" << endl;
                return;
            }
            mp[move]--;
        }
    }
    cout << "YES" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
