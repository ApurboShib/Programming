#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> v(m);
        for (int i = 0; i < m; ++i) {
            cin >> v[i];
            v[i]--;
        }
        
        string c;
        cin >> c;
        
        map<int, char> ch;
        for (int i = 0; i < m; ++i) {
            ch[v[i]] = c[i];
        }
        
        string ans = c;
        sort(ans.begin(), ans.end());
        
        int i = 0;
        for (auto& [x, _] : ch) {
            s[x] = ans[i++];
        }
        
        cout << s << endl;
    }
    return 0;
}
