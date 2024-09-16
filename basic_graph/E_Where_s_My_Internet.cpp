#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 2e5 + 9; 
vector<int> adj[N];
bool vis[N];
// vector<vector<int>> cc;
// vector<int> curr;

void dfs(int node) {
    if (vis[node]) return;
    vis[node] = true;

    for (auto child : adj[node]) {
        dfs(child);
    }
}

int main() {
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
    dfs(1);
    bool f = true;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cout << i << endl;
            f = false;
        }
    }

    if (f) {
        cout << "Connected" << endl;
    }

    return 0;
}
