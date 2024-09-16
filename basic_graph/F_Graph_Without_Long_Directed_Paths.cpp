#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
vector<vector<int>> adj(N);
vector<int> col(N, -1);
vector<bool> vis(N);

bool dfs(int node) {
    vis[node] = true;
    for (auto child : adj[node]) {
        if (col[child] == col[node]) return false;
        else if (!vis[child]) {
            col[child] = !col[node];
            if (!dfs(child))
                return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> vp;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        vp.push_back({u, v});
    }
    col[1] = 0;
    if (!dfs(1)) {
        cout << "NO";
    } else {
        cout << "YES" << endl;
        string ans = "";
        for (int i = 0; i < m; i++) {
            int u = vp[i].first, v = vp[i].second;
            if (col[u] == 0) {
                ans += "0";
            } else {
                ans += "1";
            }
        }
        cout << ans;
    }
    return 0;
}
