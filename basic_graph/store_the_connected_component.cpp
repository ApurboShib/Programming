#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int> adj[N];
vector<vector<int>> cc;
bool vis[N];

void dfs(int node, vector<int>& curr) {
    if (vis[node]) return;
    vis[node] = true;
    curr.push_back(node);
    for (auto child : adj[node]) {
        dfs(child, curr);
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, e;
    cin >> n >> e;
    while (e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        vector<int> curr;
        dfs(i, curr);
        cc.push_back(curr);
    }
    cout << "size of the vector is " << cc.size() << endl;
    for (auto x : cc) {
        for (auto i : x) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
