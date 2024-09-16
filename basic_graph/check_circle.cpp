#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(int node) {
    if (vis[node]) return;
    vis[node] = true;
    for (auto child : g[node]) {
        dfs(child);
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    
    if (n != m + 1) { 
        cout << "NO" << endl;
        return 0;
    }

    while (m--) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            cnt++;
        }
    }
    
    if (cnt == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}