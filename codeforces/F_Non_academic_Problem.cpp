#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, int &size) {
    visited[node] = true;
    size++;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, size);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> adj(n + 1);
        vector<pair<int, int>> edges(m);

        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges[i] = {u, v};
        }

        int minPairs = LLONG_MAX;

        for (auto &[u, v] : edges) {
            vector<bool> visited(n + 1, false);
            adj[u].erase(find(adj[u].begin(), adj[u].end(), v));
            adj[v].erase(find(adj[v].begin(), adj[v].end(), u));

            int pairs = 0;
            for (int i = 1; i <= n; ++i) {
                if (!visited[i]) {
                    int size = 0;
                    dfs(i, adj, visited, size);
                    pairs += size * (size - 1) / 2;
                }
            }

            minPairs = min(minPairs, pairs);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << minPairs << '\n';
    }

    return 0;
}
