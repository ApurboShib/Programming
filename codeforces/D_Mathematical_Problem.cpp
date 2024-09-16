#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


ll dfs(const string& s, int pos, int cnt) {
    if (cnt == 0) return stoll(s.substr(pos));
    
    ll res = LLONG_MAX;
    
    for (int i = pos; i < s.size() - cnt; ++i) {
        ll a = stoll(s.substr(pos, i - pos + 1));
        ll b = dfs(s, i + 1, cnt - 1);
        
        res = min(res, a + b);
        res = min(res, a * b);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll result = dfs(s, 0, n - 2);
        
        cout << result << endl;
    }
    
    return 0;
}
cf