#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector <int> adj[N];
bool vis[N];
bool isLoop = false;

// dfs for un-directed graphs..

void dfs1(int node){
    if(vis[node]) return;
    vis[node] = true;
    for(auto child : adj[node]) {
        cout << node << "->" << child << endl;
    }
}

// dfs for tree...

void dfs2(int node, int par = -1) {
    for(auto child : adj[node]) {
        if(child == par) continue;
        cout << node << "->" << child << endl;
        dfs2(child, node);
    }
}

//find the  directed component...

void dfs(int node){
    if(vis[node]) return;
    vis[node] = true;
    for(auto child : adj[node]) {
        dfs(child);
    }
}
// cycle ditect or loop ditect...

bool Loop(int node, int par = -1) {
    vis[node] = true;
    for(auto child : adj[node]) {
        if(vis[child] and child == par) continue;
        if(vis[child]) return true;
        isLoop |= Loop(child, node);
    }
    return isLoop;

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
   // dfs1(1); // it's only call for 1st node...

    // for(int i = 1; i <= n; i++){
    //     if(!vis[i]) {
    //         dfs1(i);
    //     }

    // }
    //dfs2(1);
    int connected_components = 0;
    // for(int i = 1; i <= n; i++) {
    //     if(!vis[i]){
    //         dfs(i);
    //         connected_components++;
    //     }
    // }
    // cout << connected_components << endl;

    for(int i = 1; i <= n; i++) {
        if(vis[i]){
            dfs(i);
            isLoop = true;
            break;
        }
    }
    cout << isLoop << endl;
    return 0;
}
