#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector <int> adj[N];
bool vis[N];

bool loop_found(int node, int par = -1) {
    if(vis[node]) return true;
    vis[node] = true;
    for(auto child : adj[node]) {
        if(child == par) continue;
        if(loop_found(child, node)) return true;

    }
    return false;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    if(loop_found(1)) cout << "LOOP FOUND" << endl;
    else cout << "LOOP NOT FOUND" << endl;

    return 0;
}
