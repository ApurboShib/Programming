#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int> adj[N];
int ans[N];
bool vis[N];

void dfs(int node, int par = -1) {
    vis[node] = true;
    ans[node] = par;
    for (auto child : adj[node]) {
        if (vis[child]) continue;
        dfs(child, par); 
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(ans, -1, sizeof(ans));

    for (int i = 0; i < n; i++) {
        if (vis[i]) continue;
        dfs(i, i);
    }

    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        if (ans[a] == ans[b]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
