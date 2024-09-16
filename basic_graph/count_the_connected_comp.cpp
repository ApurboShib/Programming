// simply connected component manei je dfs koybar run hoilo, cz jodi dfs run na hoy taile oi node ta disconnected.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int> adj[N];
bool vis[N];

void dfs(int node) {
    if(vis[node]) return;
    vis[node] = true;
    for(auto child : adj[node]) {
        dfs(child);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >>a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cnt = 0;
    for(int i = 0; i<n; i++) {
        if(vis[i]) continue;
        else{
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}
