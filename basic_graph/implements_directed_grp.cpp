// dfs for un-directed as dfs1 and tree in dfs2 graphs.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int> adj[N];
bool vis[N];

// void dfs1(int node){
//     if(vis[node]) return;
//     vis[node] = true;
//     for(auto child : adj[node]){
//         cout << node << "->" << child << endl;
//         dfs1(child);
//     }
// }

void dfs2(int node, int par = -1){
    for(auto child : adj[node]) {
        if(child == par) continue;
        cout << node << " -> " << child << endl;
        dfs2(child);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
   // dfs1(1);
    dfs2(1);
    return 0;
}
