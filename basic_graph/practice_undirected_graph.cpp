// traverse dfs for un-directed graph.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int>adj[N];
bool vis[N];

// runing dfs for un-directed graphs.
void dfs(int node){
    if(vis[node])return;
    vis[node] = true;
    for(auto child : adj[node]){
        cout << node << "->"<<child << endl;
        dfs(child);
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
    dfs(1);
    return 0;
}
