#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 2e5 + 9;
vector<int> adj[N];
bool vis[N];
int in[N], low[N];
int timer = 0;

void dfs(int node, int parent = -1){
    vis[node] = true;
    in[node] = low[node] = timer++;
    
    for(auto child : adj[node]){
        if(child == parent) continue;
        if(vis[child]){
            // Back edge
            low[node] = min(low[node], in[child]);
        } else {
            // Forward edge
            dfs(child, node);
            low[node] = min(low[node], low[child]);
            
            if(low[child] > in[node]){
                // This is a bridge
                // Calculate score based on the power of the bridge
                // Update maximum and minimum scores accordingly
                // ...
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    vector<int> power(m);
    for(int i = 0; i < m; i++){
        cin >> power[i];
    }

    for(int i = 0; i < n; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    // Calculate maximum and minimum scores based on the powers of bridges
    // ...

    return 0;
}
