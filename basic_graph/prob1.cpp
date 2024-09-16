#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> adj[N];
vector<int> v(N);
int m, ans = 0;

void dfs(int node, int cnt, int par = -1) {
    if (v[node])
        cnt++;
    else
        cnt = 0;

    if (cnt > m)
        return;

    if (adj[node].size() == 1 ) {
        ans++;
        
    }

    for (auto child : adj[node]) {
        if (child != par) {
            dfs(child, cnt, node);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);

    cout << ans << endl;

    return 0;
}
