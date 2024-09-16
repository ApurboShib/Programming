// implement undirected graph.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
bool vis[N];
vector<int>adj[N];

void dfs(int node){
    if(vis[node])return;
    vis[node] = true;
    for(auto child : adj[node]){
        cout << node << "->" << child << endl;
        dfs(child);
    }
}

void dfs2(int node, int par = -1){
    if(vis[node])return;
    vis[node] = true;
    for(auto child : adj[node]){
        if(child == par)continue;
        cout << node << "->" << child << endl;
        dfs2(child, node);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int node, edge;
    cin >> node >> edge;
    while(edge--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    //dfs(1);
    dfs2(1);
    return 0;
}
